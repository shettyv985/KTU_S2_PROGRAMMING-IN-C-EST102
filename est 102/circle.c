/*Read the radius of a circle, calculate its area and display it
ALGORITHM
1. Start
2. Read r
3. area=3.14*r*r
4. Print area
5. Stop*/
#include<stdio.h>
# define PI 3.14
void main()
{float r,Area;
printf("Enter the radius:");
scanf("%f",&r);
Area=PI*r*r;
printf("Area of Circle:%f\n",Area);
}

/*contributed by varun shetty CEK2021-2025*/
