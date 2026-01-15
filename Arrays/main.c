#include <stdio.h>

int main(int argc, char **argv)
{
    //Declaring array
    int numbers[10];
    
	//Loop through array and add number with same value as index to specified place
    for(int i=0; i<10;i++){
        numbers[i]=i;
    }
    //Printing value and address of number on 3 index.
    printf("Adress of number%d: %p in numbers array. \n", *(numbers+3) ,(void *) &numbers[3]);
    
    
    //Calculating average from 10 grades.
    int grades[10]; //Declaring array
    int count=10; //Number of values to be read
    long sum= 0; //Sum of the numbers
    float average = 0.0f; //Average value
    
    printf("\n Enter 10 grades \n");// Prompt for the input
    
    for (int i=0; i<count; ++i){
        printf("%2u>",i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    
    average= (float)sum/count;
    printf("\n Average of the ten grades entered is: %.2f\n", average);
    
	return 0;
}
