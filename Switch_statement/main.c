#include <stdio.h>

int main(int argc, char **argv)
{
	enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;
    
    switch (today){
        case Sunday:
            printf("Today is Sunday.");
            break;
        case Monday:
            printf("Today is Monday.");
            break;
        case Tuesday:
            printf("Today is Tuesday.");
            break;
        default:
            printf("Today is some other day");
            break;
    }
	return 0;
}
