#include<stdio.h>
int main()
{
    double wi1,ci1,wi2,ci2,results;
    printf("Weight-Item1: ");
    scanf("%lf",&wi1);
    printf("No of-Item1: ");
    scanf("%lf",&ci1);
    printf("Weight-Item2: ");
    scanf("%lf",&wi2);
    printf("No of-Item2: ");
    scanf("%lf",&ci2);
    results=((wi1*ci1)+(wi2*ci2))/(ci1+ci2);
    printf("Average Value = %lf\n",results);
    return 0;

}
