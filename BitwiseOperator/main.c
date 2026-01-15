#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;
    int result_or = 0;
    
    result = a & b;
    result_or = a | b;
    
    printf("result is %d, result of or is %d", result, result_or);
    
	return 0;
}
