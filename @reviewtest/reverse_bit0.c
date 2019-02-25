
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char r;
	unsigned int len = 8;

	r =0;
	while(len)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
		len--;
	}
	return r;
}

int main()
{
    char octet = 12;
    printf("octet:%c\n", octet);
    printf("the final result:%c\n", reverse_bits(octet));
    return (0);
}
