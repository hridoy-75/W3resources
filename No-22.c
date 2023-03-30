#include<stdio.h>
int main()
{
    int j, numbers[5],total=0;
    printf("\nInput the First number: ");
    scanf("%d",&numbers[0]);
    printf("\nInput the Second number: ");
    scanf("%d",&numbers[1]);
    printf("\nInput the Third number: ");
    scanf("%d",&numbers[2]);
     printf("\nInput the fourth number: ");
    scanf("%d",&numbers[3]);
     printf("\nInput the Fifth number: ");
    scanf("%d",&numbers[4]);
    for(j = 0; j < 5; j++) {
		if((numbers[j]%2) != 0)
		{
		   total += numbers[j];
		}
    }
   	printf("\nSum of all odd values: %d", total);
	printf("\n");
	return 0;
}
