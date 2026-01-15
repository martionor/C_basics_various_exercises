#include <stdio.h>

//Function prototype
int multiply_two_numbers(int a, int b);


int main(int argc, char **argv)
{
    //For printing whole string.
    char* str="foobar";
	printf("%s\n", str);
    
    int result = 0;
    result=multiply_two_numbers(5,5);
    
    printf("result is %d\n", result);
    
    
	return 0;
}

//Function declaration
int multiply_two_numbers(int a, int b){
    int result = a * b;
    return result;
}
