#include <stdio.h>


int main()
{
    char str[20];
    int c = sizeof(str)-1;
    char fmt[10];

    sprintf(fmt, "%%%ds", c);
    printf("Enter a word: ");
    scanf(fmt, str);
    
    printf("%s", str);
    
    return 0;
}

