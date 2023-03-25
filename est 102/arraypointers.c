/*Input and Print the elements of an array using
pointers ALGORITHM
1. Start
2. Read size of the array to n
3. Initialize one integer pointer *ptr
4. i=0
5. ptr=&a[0]
6. if(i<n) then goto step 7 else goto step 10
7. Read a number to ptr
8. ptr=ptr+1
9. i=i+1,goto step 6
10.i=0
11.ptr=&a[0]
12.if(i<n) then goto step 13 else goto step 16
13.Print a number using pointer ptr
14.ptr=ptr+1
15.i=i+1,goto step 12
16.Stop*/
#include <stdio.h>
int main()
{
int arr[100];
int n, i;
int * ptr = arr;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter elements in array:\n");
for (i = 0; i < n; i++)
{scanf("%d", (ptr + i));
}
printf("Array elements: \n");
for (i = 0; i < n; i++)
{printf("%d\n", *(ptr + i));
}
}

/*contributed by varun shetty CEK2021-2025*/
