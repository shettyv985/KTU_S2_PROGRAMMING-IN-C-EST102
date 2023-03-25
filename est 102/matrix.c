/* Write a menu driven program for performing matrix addition, multiplication
and finding the transpose. Use functions to (i) read a matrix, (ii) find the sum of two
matrices, (iii) find the product of two matrices, (iv) find the transpose of a matrix
and (v) display a matrix.
ALGORITHM of main()
1. Start
2. Declare 2 matrices a,b and their rows and columns(m1, n1, m2, n2) and a choice
variable op
3. Read m1, n1
4. Call the function readmatrix(a,m1,n1)
5. Read m2, n2
6. Call the function readmatrix(b,m2,n2)
7. To print Matrix a, call the function displaymatrix(a,m1,n1);
8. To print Matrix b, call the function displaymatrix(b,m2,n2);
9. Read op
// 1.add 2.multiply 3.transpose 4.exit
10.if(op==1) then goto step 11 else goto step 12
11.if(m1==m2 && n1==n2) then call the function addmatrix(a,b,m1,n1) else
print matrix addition is not possible go to step 15
12.if(op==2) then goto step 13 else goto step 14
13.if(n1==m2) then call the function multmatrix(a,b,m1,n1,n2), else print “matrix
multiplication is not possible” , go to step 15
14.if(op==3) then call the function transpose(a,m1,n1) else print invalid choice.
15.Stop
ALGORITHM of read_matrix(matrix[10][10],int row,int col)
1. Start
2. i=0,j=0
4. if(i<row)then goto step 5 else goto step 9
5. j=0
6. if(j<col) then read a[i][j],goto step 7 else goto step 8
7. j=j+1,goto step 6
8. i=i+1,goto step 4
9. Stop
1. Start
2. i=0,j=0
4. if(i<m)then goto step 5 else goto step 11
5. j=0
6. if(j<n) then print a[i][j],goto step 7 else goto step 9
7. Print a space
8. j=j+1,goto step 6
9. Print a new line
10. i=i+1,goto step 4
11. Stop
1. Start
2. Declare a matrix c
3. i=0,j=0
4. if(i<m)then goto step 5 else goto step 9
5. j=0
6. if(j<n) then calculate c[i][j]=a[i][j]+b[i][j],goto step 7 else goto step 8
7. j=j+1,goto step 6
8. i=i+1,goto step 4
9. Call the function displaymatrix(c,m,n);
10.Stop
1. Start
2. Declare a matrix c
3. i=0,j=0
4. if(i<m)then goto step 5 else goto step 9
5. j=0
6. if(j<n) then c[j][i]=a[i][j] ,goto step 7 else goto step 8
7. j=j+1,goto step 6
8. i=i+1,goto step 4
9. Call the function displaymatrix(c,n,m);
10.
Stop
ALGORITHM of multmatrix(int a[][100],int b[][100],int m1,int n1,int n2)
1. Start
2. Declare a matrix c
3. i=0,j=0
4. if(i<m1)then goto step 5 else goto step 12
5. j=0
6. if(j<n2) then c[j][i]=0 ,goto step 7 else goto step 8
7. k=0
8. if(k<n1) then c[i][j]=c[i][j]+ a[i][k] * b[k][j],goto step 9 else goto
step 10
9. k=k+1,goto step 8
10.j=j+1,goto step 6
11.i=i+1,goto step 4
12. Call the function
displaymatrix(c,m1,n2) 13.Stop*/
#include <stdio.h>
#include <stdlib.h>
void readmatrix(int a[][100],int m,int n)
{
int i,j;
printf("enter the elements row by row\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
void displaymatrix(int a[][100],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%5d",a[i][j]);
printf("\n");
}
}
void addmatrix(int a[][100],int b[][100],int m,int n)
{
int i,j,c[100][100];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
printf("Sum of matrix...\n");
displaymatrix(c,m,n);
}
void transpose(int a[][100],int m,int n)
{
int i,j,c[100][100];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[j][i]=a[i][j];
displaymatrix(c,n,m);
}
void multmatrix(int a[][100],int b[][100],int m1,int n1,int n2)
{
int c[100][100],i,j,k;
for (i = 0; i < m1; i++) {
for (j = 0; j < n2; j++) {
c[i][j] = 0;
for (k = 0; k < n1; k++)
c[i][j] += a[i][k] * b[k][j];
}
}
printf("Product of matrix...\n");
displaymatrix(c,m1,n2);
}
int main()
{ int a[100][100],b[100][100],m1,n1,m2,n2,op;
printf("Enter the size of the matrix A row,column\n");
scanf("%d%d",&m1,&n1);
printf("Enter Matrix A\n");
readmatrix(a,m1,n1);
printf("Enter the size of the matrix B row,column\n"); 
scanf("%d%d",&m2,&n2);
printf("Enter Matrix B\n");
readmatrix(b,m2,n2);
system("clear");
printf("Matrix A..\n");
displaymatrix(a,m1,n1);
printf("Matrix B..\n");
displaymatrix(b,m2,n2);
while(1)
{
printf("\n************************************\n");
printf("1.add 2.multiply 3.transpose 4.exit \n");
printf("Enter the option.....:"); scanf("%d",&op);
switch(op)
{
case 1: if(m1==m2 && n1==n2)
addmatrix(a,b,m1,n1);
else
printf("Incompatable matrix...cannot add..\n");
break;
case 2: if(n1==m2)
multmatrix(a,b,m1,n1,n2);
else
printf("Incompatable matrix...cannot mutliply..\n");
break;
case 3: printf("Transpose of A..\n");
transpose(a,m1,n1);
printf("Transpose of B..\n");
transpose(b,m2,n2);
break;
case 4: exit(0);
}
}
}

/*contributed by varun shetty CEK2021-2025*/
