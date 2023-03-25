/*Read n integers, store them in an array and sort the elements in the array using Bubble Sort
ALGORITHM
1. Start
2. Read the limit of array to n
3. i=0
4. if(i<n) then goto step 5 else goto step 7
5. Read the number A[i]
6. i=i+1, then goto step 4
7. i=0
8. if(i < n) then goto step 9 else goto step 10
8.1. j=0
8.2 if (j< n-i-1)goto step 11 else goto step 9
8.3 if(a[j] > a[j+1])then goto step 8.4 else goto step
8.4 temp=a[j]
8.5 a[j]=a[j+1]
8.6 a[j+1]=temp
8.7 j=j+1,goto step 8.2
9. i=i+1,goto step 8
10. Print the sorted array
11. Stop*/
#include <stdio.h>
void main()
{
int a[25],n;
int i,j,t;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements are");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("sorted array is:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

/*contributed by varun shetty CEK2021-2025*/
