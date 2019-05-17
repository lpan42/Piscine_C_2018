#include<unistd.h>

void printstr(char *str, int low, int high)
{
    while (low <= high)
    {
        write (1, &str[low], 1);
        low++;
    }
}

void biggest_pal(char *str)
{
    int max;
    int i;
    int start;
    int len;
    int low;
    int high;

    max = 1;
    i = 1;
    start = 0;
    len = 0;
    while(str[len])
        len++;
    while(i < len)
    {
        low = i - 1;
        high = i;
        while (low >= 0 && high <= len && str[low] == str[high])
        {
            if (high - low + 1 > max)
            {
                start = low;
                max = high - low + 1;
            }
            low--;
            high++;
        }
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high <= len && str[low] == str[high])
        {
            if (high - low + 1 > max)
            {
                start = low;
                max = high - low + 1;
            }
            low--;
            high++;
        }
        i++;
    }
    printstr(str, start, start + max - 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        biggest_pal(argv[1]);
    write (1, "\n", 1);
    return 0;
}