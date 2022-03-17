#include <stdio.h>




int main(void){

int year = 2000;
int month = 2;
int day = 60;

if ((year % 4 == 0 || year % 400 == 0) && (year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
}
