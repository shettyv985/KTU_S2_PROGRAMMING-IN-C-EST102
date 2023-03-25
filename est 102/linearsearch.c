/*Read n integers, store them in an array and search for an element in the array
using an algorithm for Linear Search
ALGORITHM
START
1. Start
2. Read the limit n
3. Read the number to be search num
4. i=0
5. if(i<n) then goto step 6 else goto step 8
6. Read the number A[i]
7. i=i+1, then goto step 5
8. i=0
9. if(i<n) then goto step 10 else goto step 11
10.if(A[i]==num) then print number is present and goto step11, else i=i+1 and goto step 9
11.Stop*/
#include<stdio.h>
void main()
{
int array[100], search, c, n;
printf("Enter number of elements inarray\n"); 
scanf("%d", &n);
printf("Enter %d integer(s)\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
printf("Enter a number to search\n");
scanf("%d", &search);
for (c = 0; c < n; c++)
{
if (array[c] == search)
{
printf("%d is present at location %d.\n", search,
c+1); break;
}
}
if (c == n)
printf("%d isn't present in the array.\n", search);
}
