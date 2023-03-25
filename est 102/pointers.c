/*Do the following using pointers i) add two numbers ii) swap two numbers using
a user defined function.
i) Add two numbers
ALGORITHM
1. Start
2. Initialize two integer pointers p,q.
3. Read a,b
4. Reference the pointers to variables using '&' operator.//p=&a,q=&b
5. Now, add the values, using * operator//sum=*p+*q
6. Print the sum.
7. Stop
ii) Swap two numbers
ALGORITHM
1. Start
2. Initialize two integer pointers p,q.
3. Read a,b
4. Reference the pointers to variables using '&' operator.//p=&a,q=&b
5. Now, interchange the values, using * operator//t=*p,*p=*q,*q=t
Print the swapped values using * operator.//Print *p,*q
6. Stop*/

/*1*/
#include <stdio.h>
int main()
{
int first, second, *p, *q, sum;
printf("Enter two integers to add\n");
scanf("%d%d", &first, &second);
p = &first;
q = &second;
sum = *p + *q;
printf("Sum of the numbers = %d\n", sum);
}

/*2*/
#include <stdio.h>
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
int main()
{
int x, y;
printf("Enter Value of x ");
scanf("%d", &x);
printf("\nEnter Value of y ");
scanf("%d", &y);
swap(&x, &y);
printf("\nAfter Swapping: x = %d, y = %d", x, y);
return 0;
}

/*contributed by varun shetty CEK2021-2025*/
