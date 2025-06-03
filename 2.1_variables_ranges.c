/* ex. 2_1
Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, 
by printing appropriate values from standard headers and by direct computation. 
*/

// First approach

#include<stdio.h>
#include<limits.h>

int main(void)
{
    // Signed
    
    printf("Minimum Signed Char: %d\n", SCHAR_MIN);
    printf("Maximum Signed Char: %d\n", SCHAR_MAX);

    printf("Minimum Signed Short: %d\n", SHRT_MIN);
    printf("Maximum Signed Short: %d\n", SHRT_MAX);

    printf("Minimum Signed Int: %d\n", INT_MIN);
    printf("Maximum Signed Int: %d\n", INT_MAX);

    printf("Minimum Signed Long: %ld\n", LONG_MIN);
    printf("Maximum signed Long: %ld\n", LONG_MAX);

    // Unsigned 

    printf("Maximum Unsigned Char: %d\n", UCHAR_MAX);
    printf("Maximum Unsigned Short: %d\n", USHRT_MAX);
    printf("Maximum Unsigned Int: %u\n", UINT_MAX);
    printf("Maximum Unsigned Long: %lu\n", ULONG_MAX);

    return 0;
}


// Second approach

#include<stdio.h>

int main(void)
{
    // Signed
    printf("Minimum Signed Char: %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char: %d\n",(char) ((unsigned char) ~0 >> 1));

    printf("Minimum Signed Short: %d\n",-(short)((unsigned short)~0 >>1) -1);
    printf("Maximum Signed Short: %d\n",(short)((unsigned short)~0 >> 1));

    printf("Minimum Signed Int: %d\n",-(int)((unsigned int)~0 >> 1) -1);
    printf("Maximum Signed Int: %d\n",(int)((unsigned int)~0 >> 1));

    printf("Minimum Signed Long: %ld\n",-(long)((unsigned long)~0 >>1) -1);
    printf("Maximum signed Long: %ld\n",(long)((unsigned long)~0 >> 1));

    // Unsigned

    printf("Maximum Unsigned Char: %d\n",(unsigned char)~0);
    printf("Maximum Unsigned Short: %d\n",(unsigned short)~0);
    printf("Maximum Unsigned Int: %u\n",(unsigned int)~0);
    printf("Maximum Unsigned Long: %lu\n",(unsigned long)~0);

    return 0;
}