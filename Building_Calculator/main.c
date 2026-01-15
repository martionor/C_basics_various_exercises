#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long sum = 0;
    unsigned int count = 0;
    
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);
    
    for (unsigned int i = 1; i <=count; ++i){
    sum +=i;    
        }
        
    printf("\nTotal of first %u numbers is %lu\n", count, sum);    
	return 0;
}
