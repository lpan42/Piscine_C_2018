
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}

int main()
{
    char octet = 100;
    printf("octet:%c\n", octet);
    printf("the final result:%c\n", swap_bits(octet));
    return (0);
}
