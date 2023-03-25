/*Find the factorial of a given Natural Number n using recursive and non
recursive functions
i) Non recursive
ALGORITHM of main()
1. Start
2. Read n
3. Call the function fact(n)
4. Stop
1. Start
2. z=1
3. If (x != 0) then goto step 2.3 else goto step 2.5
4. z= z*x
5. x=x-1, go to step 2.2
6. Print z
7. Read the number to n
8. Call the function fact(n)
9. Stop
ii) Recursive
ALGORITHM for main()
1. Start
2. Read n
3. Call the function fact(n)
4. Print Factorial f
5. Stop
1. Start
2. If (x==1) then return 1 else goto step 3
3. f=x*fact(x-1)
4. Return f
5. Stop*/
#include <stdio.h>
long int factnr(int n)
{ int i;
long int f=1;
for(i=1;i<=n;i++)
f=f*i;
return f;
}
long int factr(int n)
{
if(n==0) return 1;
else
return (n*factr(n-1));
}
int main()
{int n;
printf("Enter the number \n");
scanf("%d",&n);
printf("Factorial using non recursive function %d !=%ld\n",n,factnr(n));
printf("Factorial using recursive function %d !=%ld\n",n,factr(n));
}

/*contributed by varun shetty CEK2021-2025*/

