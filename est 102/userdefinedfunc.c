/*Read a string (word), store it in an array and obtain its reverse by using a user
defined function.
ALGORITHM of main()
1. Start
2. Call the function reverse()
5. Stop
1. Start
2. Read a word to str
3. Find length of str to n.
4. n=n-1
5. if(n>=0)then Print str[n] else goto step 4
6. Stop*/
#include <stdio.h>
#include <string.h>
void reversestr(char str[])
{ int i,n; char c;
n=strlen(str);
for(i=0;i<n/2;i++)
{ c=str[i];
str[i]=str[n-1-
i]; str[n-1-i]=c;
}
}
int main()
{
char str[100];
printf("Enter the string \n");
scanf("%[^\n]",str);
reversestr(str);
printf("Reversed string is=%s\n",str);
}

/*contributed by varun shetty CEK2021-2025*/
