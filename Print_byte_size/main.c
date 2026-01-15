#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Variables of type char occupy %u\n", sizeof(char));
    printf("Variables of type short occupy %u\n", sizeof(short));
    printf("Variables of type int occupy %u\n", sizeof(int));
    printf("Variables of type long occupy %u\n",sizeof(long));
    printf("Variables of type long long occupy %u\n", sizeof(long long));
    printf("Variables of float occupy %u\n", sizeof(float));
    printf("Variables of type double occupy %u\n", sizeof(double));
    printf("Variables of type long double occupy %u\n", sizeof(long double));
	return 0;
}
