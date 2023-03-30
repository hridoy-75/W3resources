#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
    printf("\nInput the first integer: ");
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    if (x>y && x>z)
    {
       printf("\nMaximum value of three integers: %d",x);
    }
    else if (y>x && y>z)
    printf("\nMaximum value of three integers: %d",y);
    else{
        printf("\nMaximum value of three integers: %d",z);
    }
	printf("\n");
    return 0;
}
