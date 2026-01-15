#include <stdio.h>

int main(int argc, char **argv)
{
	int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;
    
    printf("Please enter the number of minutes: ");
    
    //Get input from user
    scanf("%d", &minutesEntered);
    
    minutesInYear = (60*24*365);
    
    years = (minutesEntered / minutesInYear);
    
    days = (minutesEntered / (60.0*24.0));
    
    printf("%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);
    
	return 0;
}
