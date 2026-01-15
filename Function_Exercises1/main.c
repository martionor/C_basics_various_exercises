#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
float absolute_value(float c);
float square_root(float d);

int main(int argc, char **argv)
{
	printf("Default Project\n");
    int calculation_gcd= gcd(15,5);
    printf("Gcd of 15 and 5 is: %d\n", calculation_gcd);
    
    float calculation_abs_val = absolute_value(-10);
    printf("Absolue value of -10 is: %0.2f\n", calculation_abs_val);
    
    float calculation_sqr_root=square_root(16);
    printf("Square root of 16 is: %0.2f\n", calculation_sqr_root);
    
	return 0;
}


int gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = a%b;
        a=b;
        b=temp;
    }
    
    return a;
}

float absolute_value(float c){
    if(c<0){
        c=-c;
    }
    return c;
}

float square_root(float d){
    const float epsilon = 0.00001;
    float guess = 1.0;
    if(d<0){
        printf("Negative argument to square root");
        return -1.0f;
    }
    
    if (d == 0.0f)
        return 0.0f;
    
    while(absolute_value(guess *guess -d) >= epsilon){
        guess=(guess+d/guess)*0.5f;
    }
    return guess;
}