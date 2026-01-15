#include <stdio.h>
#include <stdlib.h>
//Weather with 2d array for displaying and calculating average
#define MONTHS 12
#define YEARS 5

int main(int argc, char **argv)
{
	float weather_array[YEARS][MONTHS]={
        {5.5, 3.5, 3.3, 5.6, 7.2, 8.3, 9.9, 14.1, 15.1, 10.2, 11.2, 12.2},
        {5.5, 3.5, 3.3, 5.6, 7.2, 8.3, 9.9, 14.1, 15.1, 10.2, 11.2, 12.2},
        {5.7, 3.5, 4.3, 5.6, 7.2, 8.3, 9.9, 14.1, 10.1, 10.2, 10.2, 10.2},
        {5.5, 3.5, 3.3, 5.6, 8.2, 8.3, 5.9, 14.1, 15.1, 10.2, 11.2, 12.2},
        {5.5, 3.5, 3.3, 5.6, 7.2, 8.3, 1.9, 10.1, 15.1, 10.2, 11.2, 12.2},
    };
    int starting_year= 2011;
    int month, year;
    float total_rain[5];
    float rain_summ=0, all_rain=0;
    
    for(year=0; year<YEARS; year++){
        for(month=0; month<MONTHS; month++){
            rain_summ += weather_array[year][month];
        }
        total_rain[year]=rain_summ;
        printf("year:%d ,total rain: %0.2f \n",starting_year+year, total_rain[year]);
        rain_summ=0;
    }
    
    for(int i=0; i<YEARS; i++){
        all_rain += total_rain[i];
    }
    printf("\nThe yearly rainfall average is: %0.2f\n", all_rain/YEARS);
    
    printf("Monthly averages: \n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Okt  Nov  Dec  \n");
    for(month=0; month<MONTHS; month++){
        for(year=0, rain_summ=0; year<YEARS; year++){
            rain_summ += weather_array[year][month];
        }
        printf("%4.1f ", rain_summ/YEARS);
    }
	return 0;
}
