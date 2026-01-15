#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    //Create and define enum Company
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO=10, EBAY, MICROSOFT};
    
    //Create 3 Variables
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    
    //Display output of values, it is index number if it is not defined otherwise like YAHOO=10, than following are having values of 10 +1 for example EBAY will be 11
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);
    
	return 0;
}
