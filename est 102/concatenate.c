/*Read two strings (each one ending with a $ symbol), store them in arrays and
concatenate them without using library functions.
ALGORITHM
1. Start
2. Read two strings to a and b
3. Find length of a to n
4. i=0,j=n-1
5. (if b[i]!= ‘\0’) then a[j]=b[i] else goto step 7
6. i=i+1,j=j+1 then goto step 5
7. a[j]=’\0’
8. Print a
9. Stop*/
#include<stdio.h>
void main()
{char Str1[100], Str2[100];
int i, j;
printf("\n Please Enter the First String :(end with$!!)");
 gets(Str1);
printf("\n Please Enter the Second String :(end with$!!)");
 gets(Str2);
for (i = 0; Str1[i]!='$'; i++);
for (j = 0; Str2[j]!='$'; j++, i++)
{
Str1[i] = Str2[j];
}
Str1[i] = '\0';
printf("\n String after the Concatenate = %s", Str1);
}

/*contributed by varun shetty CEK2021-2025*/
