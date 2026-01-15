#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double width = 15.3;
    double height = 5.5;
    double perimeter = 0.0;
    double area = 0.0;
    
    perimeter = 2.0 * (width + height);
    area = width * height;
    
    
    printf("Perimeter of rectangle is: %.2f and area of rectangle is: %.2f\n", perimeter, area);
    
    
	return 0;
}
