/*ALGORITHM for main()
1. Start
2. Read size of the array to n
3. Initialize one integer pointer *ptr
4. i=0
5. ptr=&a[0]
6. if(i<n) then goto step 7 else goto step 10
7. Read a number to ptr
8. ptr=ptr+1
9. i=i+1,goto step 6
10.Call the function sum(&a,n)
11.Stop
ALGORITHM for function sum(int *ptr, int n)
1. Start
2. i=0,s=0
3. if(i<n) then goto step 4 else goto step 7
4. s=s+*ptr
5. ptr=ptr+1
6. i=i+1,goto step 3
7. Print s
8. Stop*/
#include <stdio.h>
#include <stdlib.h>
int arraysum(int *ptr,int n)
{
int sum=0,i;
for (i = 0; i < n; i++)
{sum=sum+ *(ptr + i);
}
return sum;
}
int main()
{
int arr[]={4,5,6,7,8,9,10,1,2,3};
int sum;
sum=arraysum(arr,10);
printf("Array elements sum=:%d \n",sum);
}

/*contributed by varun shetty CEK2021-2025*/
