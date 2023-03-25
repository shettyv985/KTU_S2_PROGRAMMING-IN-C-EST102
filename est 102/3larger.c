/*Read 3 integer values and find the largest among them.
ALGORITHM
1. Start
2. Read a,b,c
3. if(a > b && a>c) then print a is largest else goto step 4
4. if(b > a && b>c ) then print b is largest else print c is largest
5. Stop*/
#include<stdio.h>
void main()
{
int n1, n2, n3;
printf("Enter three different numbers: \n");
scanf("%d%d%d", &n1, &n2, &n3);
if (n1 >= n2 && n1 >= n3)
printf("%d is the largest number.\n", n1);
if (n2 >= n1 && n2 >= n3)
printf("%d is the largest number.\n", n2);
else
printf("%d is the largest number.\n", n3);
}

/*contributed by varun shetty CEK2021-2025*/
