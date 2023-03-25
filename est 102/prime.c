/*Read a Natural Number and check whether the number is prime or not
ALGORITHM
1. Start
2. Read num
3. Set flag=0, i = 2
4. If (num num/2) then goto step 4.1 else goto
4.1 if( num % 2 == 0) then set flag=1 else goto step 4.2
4.2 i=i+1, goto step 4
5. if (flag ==0) then print num is prime else print num is not prime
6. Stop*/
#include <stdio.h>
void main()
{
int n, i, flag = 0;
printf("Enter a positive integer: \n");
scanf("%d", &n);
for (i = 2; i <= n / 2; ++i)
{
if (n % i == 0)
{
flag = 1;
break;
}
}
if (n == 1)
{
printf("1 is neither prime nor composite.\n");
}
else
{
if (flag == 0)
printf("%d is a prime number.", n);
else
printf("%d is not a prime number.\n", n);
}}

/*contributed by varun shetty CEK2021-2025*/
