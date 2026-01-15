#include <stdio.h>

int main(int argc, char **argv)
{
	int hours_worked;
    float pay_rate = 12.00;
    
    
    printf("Enter hours worked per week: ");
    scanf ("%i", &hours_worked);
    
    printf("Hours worked %d\n", hours_worked);
	
    float gross_pay = hours_worked * pay_rate;
    printf("Gross pay %.2f\n", gross_pay);
    
    float net_pay;
    float taxrate_15= 0.15 * 300;
    float taxrate_20= 0.20 *150;
    
    
    if (gross_pay <= 300){
        net_pay = gross_pay * 0.85;
        printf("15 percent of the first 300 dollars is: %.2f\n", gross_pay*0.15);
    }
    
    else if (gross_pay > 300 && gross_pay <=450){
        float taxes = (taxrate_15 + (gross_pay -300) *0.20);
        printf("15 percent of the first 300 dollars and 20 percent from top up to 150 more dollars is: %.2f\n", taxes);
        net_pay = gross_pay - taxes;
    }
    
    else {
        float taxes = taxrate_15 + taxrate_20 + ((gross_pay -450)*0.25);
        printf("Total taxes is gross pay is more than 450 dollars: %.2f\n", taxes);
        net_pay = gross_pay - taxes;
    }
    
    printf("Net pay is: %.2f\n", net_pay);
	return 0;
}
