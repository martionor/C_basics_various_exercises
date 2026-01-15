#include <stdio.h>

int main(int argc, char **argv)
{
    //mathematics operations
	int a = 4;
    int b = 41;
    int result = 0;
    
    result = a +b ;
    printf("result is %d\n",result);
    
    
    //Logical Operators (&&,||, !)
    _Bool c = 1;
    _Bool d = 1;
    _Bool result_bool;
    
    result_bool = c && d;
    
    printf("%d",result_bool);
    
    
    
	return 0;
}
