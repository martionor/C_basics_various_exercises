#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    
	int prime_numbers[50]={0};
    int prime_index = 2;
    
    bool isPrime=false;
    
    //Hardcoding first prime numbers
    prime_numbers[0]=2;
    prime_numbers[1]=3;
    
    for(int p=5; p<=100; p=p+2){
        isPrime= true;
        for(int i=1; isPrime && p/prime_numbers[i]>= prime_numbers[i];i++){
            if(p % prime_numbers[i] ==0){
                isPrime= false;
            }
        }
        if(isPrime== true){
            prime_numbers[prime_index] = p;
            prime_index +=1;
        }
    }
    
    for (int i = 0;  i < prime_index;  ++i )
         printf ("%i  ", prime_numbers[i]);

    printf("\n");
    
	return 0;
}
