#include <stdio.h>

int main(int argc, char **argv)
{
	int count = 1;
    
    while (count <=5){
        printf("%i\n", count);
        count +=1;
    }
    
    
    int number = 5;
    do {
        printf("\n Printing number= %d",number);
        number +=1;
    }while(number <11);
	return 0;
}
