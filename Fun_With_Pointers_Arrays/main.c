#include <stdio.h>

void print_array();

int main()
{
    // Define an array of 10 integers.
    // First 3 elements initialized to 1, 2, 3; rest automatically set to 0
    int arr[10]={1,2,3};
    
    //Pointer to beginning of array
    int* p= arr;
   

    // Calculate the number of elements in the array
    int array_size_calc= sizeof(arr)/ sizeof(arr[0]);
    
    
    print_array(p,array_size_calc);
    return 0;
}

// Prints the elements of an integer array using a pointer
void print_array(int* p, int size){
    for(int i=0; i<size;i++){
        printf("Index %d number %d\n",i, *(p+i));
    }
}
