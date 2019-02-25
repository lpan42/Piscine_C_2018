
#include <stdio.h>
int reverseandtoint(unsigned char octet)
{
    int i;
    i = 0;
    i += (octet / 128) * 1;
    i += (octet % 128) / 64  * 10;
    i += (octet % 64) / 32  * 100;
    i += (octet % 32) / 16  * 1000;
    i += (octet % 16) / 8  * 10000;
    i += (octet % 8) / 4  * 100000;
    i += (octet % 4) / 2  * 1000000;
    i += (octet % 2) / 1  * 10000000;
    printf("reverse and to int: %d\n", i);
    return (i);
}

unsigned char changeinttochar(int i)
{
    unsigned char octet;

    octet = 0;
    octet += (i / 10000000) * 128;
    octet += (i % 10000000) / 1000000 * 64;
    octet += (i % 1000000) / 100000 * 32;
    octet += (i % 100000) / 10000 * 16;
    octet += (i % 10000) / 1000 * 8;
    octet += (i % 1000) / 100 * 4;
    octet += (i % 100) / 10 * 2;
    octet += (i % 10) / 1 * 1;
    printf("change back to char: %c\n", octet);
    return (octet);
}
unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result = changeinttochar(reverseandtoint(octet));
    return (result);
}

int main()
{
    char octet = 12;
    printf("octet:%c\n", octet);
    printf("the final result:%c\n", reverse_bits(octet));
    return (0);
}
