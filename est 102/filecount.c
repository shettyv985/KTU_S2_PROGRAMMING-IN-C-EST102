/*4.21 Open a text input file and count the number of characters, words and lines in
it; and store the results in an output file.
1. Start
2. Create a file pointer *fp
3. c=o,w=0,l=0
4. Open an existing file in read mode using file pointer fp
//fp=fopen(“a.txt”,”r”)
5. if(fp==NULL) then print Error opening file else goto step 5
6. Read the content from file a.txt to ch//ch=getc(fp)
7. if (ch!='EOF') then goto step 7 else goto step 10
8. if(ch==’\n’) then l=l+1 else goto step 9
9. if(ch==’ ’) then w=w+1 else c=c+1,goto step 6
10.Print c,w,l
11.Close the file
12.Stop
PROGRAM*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char fname[50];
int ch;
int nl=0,nc=0,nw=0;
printf("Enter the file name....\n");
scanf("%[^\n]",fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
printf("Error opening file..");
exit(1);
}
ch=getc(fp);
while(ch!=EOF)
{
if (ch=='\n') nl++;
if(ch==' ') nw++;
nc++;
ch=getc(fp);
}
fclose(fp);
printf("Number of lines=%d Number of words=%d ,Number of characters = %d,\n",nl,nw,nc+nl);
printf("results are written into result.datfile..\n"); fp=fopen("result.dat","w");
fprintf(fp,"Number of lines=%d Number of words=%d ,Number of characters =%d,\n",nl,nw,nc+nl);
fclose(fp);
}

/*contributed by varun shetty CEK2021-2025*/
