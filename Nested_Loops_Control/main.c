#include <stdio.h>

int main(int argc, char **argv)
{
    int count = 10;
    for (int i=1; i <= count; ++i){
        int sum = 0; //Initialize sum for the inner loop
        
        //Calculate sum of integers from 1 to i
        int j;
        for(j = 1; j<=i; ++j){
            if(j>5){
                break;
            }
            sum +=j;
        }
        printf("\n%d\t%d", i, sum);
    }
}
