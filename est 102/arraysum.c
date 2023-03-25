/*Read n integers store them in an array and find their sum and average
ALGORITHM
1. Start
2. Read the limit n
3. sum =0,i=0
4. if(i<n) then goto step 5 else goto step 8
5. Read the number A[i]
6. sum = sum + A[i]
7. i=i+1, then goto step 4
8. avg = sum / n
9. Print sum, avg
10.Stop*/
#include <stdio.h>
int main()
{
int n, i;
float num[100], sum = 0.0, avg;
printf("Enter the numbers of elements:\n");
scanf("%d", &n);
while (n > 100 || n < 1)
{
printf("Error! number should in range of (1 to 100).\n");
printf("Enter the number again:\n");
scanf("%d", &n);
}
for (i = 0; i < n; ++i) {
printf("%d. Enter number: \n", i + 1);
scanf("%f", &num[i]);
sum += num[i];
}
avg = sum / n;
printf("Sum=%.2f\n",sum);
printf("Average = %.2f\n", avg);
return 0;
}

/*contributed by varun shetty CEK2021-2025*/
