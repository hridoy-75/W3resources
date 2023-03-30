#include<stdio.h>
#include<conio.h>
int main()
{   float x,y,z,peri;
    printf("\nInput the First number: ");
    scanf("%f",&x);
    printf("\nInput the Second number: ");
    scanf("%f",&y);
    printf("\nInput the Third number: ");
    scanf("%f",&z);
    if(x<(y+z) && y<(x+z) && z<(y+x))
    {
	 peri = x+y+z;
	 printf("\nPerimeter  = %.1f\n", peri);
    }
    else
    {
    	printf("Not possible to create a triangle..!");
	}

}
