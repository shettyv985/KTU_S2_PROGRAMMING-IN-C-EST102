/*Read a string (word), store it in an array and check whether it is a
palindrome word or not.
ALGORITHM
1. start
2. Read the string to str
3. Find length of str.to n.
4. flag=0
5. l=0
6. h=n-1
7. if(l<=n/2) then goto step 8 else goto step 10
8. If (str[l] !=str[h]) then flag=1and goto step 10 else goto step 9
9. l=l+1 and h=h-1,goto step 7
10.
if(flag==1) then print string is not a palindrome else print string is
a palindrome
11.Stop*/
#include <stdio.h>
#include <string.h>
void main()
{
char string1[20];
int i, length;
int flag = 0;
printf("Enter a string:");
scanf("%s", string1);
length = strlen(string1);
for(i=0;i < length ;i++)
{
if(string1[i] != string1[length-i-1]){
flag = 1;
break;
}
}
if (flag) {
printf("%s is not a palindrome\n", string1);
}
else {
printf("%s is a palindrome\n", string1);
}
}

/*contributed by varun shetty CEK2021-2025*/
