#include <stdio.h>

#define MONTHS 12

int main(int argc, char **argv)
{
    //All values on initialization
	int counters[5]= {0,0,0,0,0};
    
    // Undeclared values will be 0
    float sample_data[500]={5.5, 4.4, 3.3};
    
    //Designated initializers
    float sample_data_designated[500]={[2]=2.2};
    printf("%0.2f\n", *(sample_data_designated +2));
    
    
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    
    for(index = 0; index<MONTHS; index++){
        printf("Month %d has %2d days.\n", index+1, *(days+index));
    }
    
    
    //Initializing array with 5 values
    int array_values[10]={1,5,9,13,15};
    
    //Looping and adding rest of the values
    for (int i=5; i<10; i++){
        array_values[i]=i*i;
    }
    
    //Looping and printing value index and its value
    for(int i=0; i<10; i++){
        printf("array_values[%i]=%i\n",i, array_values[i]);
    }
    
	return 0;
}
