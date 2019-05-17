// Assignment name  : biggest_pal
// Expected files   : *.c, *.h
// Allowed functions: write
// --------------------------------------------------------------------------------
// Write a program named biggest_pal that takes a string as argument and prints the
// biggest palindrome included inside this string, followed by a newline. 
// This string contains only lowercase characters.
// If there is two palindromes of the same length, you have to print the last one.
// If there is more or less than 1 argument, your program must print only a newline
// only.
// Exemples:
// $> biggest_pal "abcba"
// abcba
// $> biggest_pal "aaaaaaaaaabbcbbaaaa"
// aaaabbcbbaaaa
// $> biggest_pal "aooibdaoiwhoihwdoinzeldaisaboyobasiadlezfdsfnslk"
// zeldaisaboyobasiadlez
// $> biggest_pal "aeibaabaammaabaalek"
// aabaammaabaa

#include <string.h> 
#include <unistd.h>
  
void printSubStr(char* str, int low, int high) 
{ 
    while(low <= high) 
    {
          write(1, &str[low], 1); 
          low++;
    }
} 

void longestPalSubstr(char *str) 
{ 
    int maxLength;
    int start; 
    int len; 
    int low;
    int high; 
    int i;

    start = 0;
    len = 0;
    i = 1;
    maxLength = 1;
    while(str[len])
        len++;
    while (i < len) 
    { 
        low = i - 1; 
        high = i; 
        while (low >= 0 && high < len && str[low] == str[high]) 
        { 
            if (high - low + 1 > maxLength) 
            { 
                start = low; 
                maxLength = high - low + 1; 
            } 
            low--; 
            high++; 
        } 
        low = i - 1; 
        high = i + 1; 
        while (low >= 0 && high < len && str[low] == str[high]) 
        { 
            if (high - low + 1 > maxLength) 
            { 
                start = low; 
                maxLength = high - low + 1; 
            } 
            low--; 
            high++; 
        } 
        i++;
    } 
    printSubStr(str, start, start + maxLength - 1); 
} 

int main(int argc, char **argv) 
{ 
    if(argc == 2)
        longestPalSubstr(argv[1]); 
    write(1, "\n", 1);
    return 0; 
} 