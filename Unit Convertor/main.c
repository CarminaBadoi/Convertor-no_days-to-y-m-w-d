// #### Badoi Carmina ####
// ##   29/02/2020      ##
// #######################

//print out the equivalent of  a number of days in years ,months, weeks and days

#include <stdio.h>
#include <stdlib.h>

int main()
{ int no_days,years,months,weeks,remaing_days,days;

    printf("Give me a number of days: ");
    scanf("%d",&no_days);

    printf("%d days\n",no_days);

    printf("That means...\n");

    //Calculate years
    years = no_days / 365;
    remaing_days= ( no_days - (years * 365 ) ) ;

    //Calculate months
    months = remaing_days / 30;
    remaing_days= remaing_days- (remaing_days / 30) * 30 ;

    //Calculate weeks
    weeks = remaing_days/7;
    remaing_days= remaing_days- (remaing_days / 7) * 7 ;

    //Calculate days
    if (remaing_days < 7) { days = remaing_days ; }

    // Print out the result
    printf("%d years, %d months, %d weeks and %d days", years,months,weeks,days);

    return 0;
}
