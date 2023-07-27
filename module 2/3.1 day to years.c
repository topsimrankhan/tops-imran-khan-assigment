#include <stdio.h> 
int main()
{
    int days, years;

    years=500; 

    // Converts years to day
    years = days/365;
    days = days- (years*365);

    printf("Years: %d\n", years);
    printf("Days: %d \n", days);

    return 0;
}
