/*Read a Natural Number and check whether the number is Armstrong or not
ALGORITHM
1. Start
2. sum = 0
3. Read n
4. temp=n
5. If (temp != 0) then goto step 6 else goto step 9
6. t = temp%10
7. sum = sum+t*t*t
8. temp = temp/10 goto step 5
9. if(n == sum) then print it is an armstrong no else print it is not an
armstrong no
10. Stop*/
#include <stdio.h>
void main()
{
int num, S, remainder, result = 0;
printf("Enter a three-digit integer: ");
scanf("%d", &num);
S = num;
while (S != 0)
{
remainder = S % 10;
result += remainder * remainder * remainder;
S /= 10;
}
if (result == num)
printf("%d is an Armstrong number.",
num); else
printf("%d is not an Armstrong number.", num);
}

/*contributed by varun shetty CEK2021-2025*/
