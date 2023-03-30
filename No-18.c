#include<stdio.h>
#include<conio.h>
void main()
{
    int ndays, years, months, days;
    printf("Input days: ");
    scanf("%d", &ndays);
    years=(int)ndays/365;
    ndays=ndays-(365*years);
    months=(int)ndays/30;
    days=(int)ndays-(months*30);
    printf("%d Years \n %d Months \n %d Days",years,months,days);

}
