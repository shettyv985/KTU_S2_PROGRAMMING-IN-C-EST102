/*Create a file and perform the following
i) Write data to the file
ii) Read the data in a given file & display the file content on console
iii) Append new data and display on console
i) Write data to the file
1. Start
2. Create a file pointer *fp
3. Open a new file in write mode using file pointer fp
//fp=fopen(“a.txt”,”w”)
4. if(fp==NULL) then print Error opening file else goto step 5
5. Read ch
6. if (ch!='EOF') then goto step 7 else goto step 8
7. Write ch to file a.txt,goto step 5
8. Close the file
9. Stop
ii) Read the data in a given file & display the file content on console
1. Start
2. Create a file pointer *fp
3. Open an existing file in read mode using file pointer fp
//fp=fopen(“a.txt”,”r”)
4. if(fp==NULL) then print Error opening file else goto step 5
5. Read the content from file a.txt//ch=getc(fp)
6. if (ch!='EOF') then goto step 7 else goto step 8
7. Print the content from the file a.txt, goto step 5 //putchar(ch);
8. Close the file
9. Stop
iii) Append new data and display on console
1. Start
2. Create a file pointer *fp
3. Open an existing file in append mode using file pointer fp
//fp=fopen(“a.txt”,”a+”) //a+ : append data in a file and update
it, which means it can write at the end and also is able to read
the file
4. if(fp==NULL) then print Error opening file else goto step 5
5. Read the content to be append to ch
6. if (ch!='EOF') then goto step 7 else goto step 8
7. Write ch to the end of the file a.txt,goto step 5
8. Close the file
9. Stop*/
/*(i)Write Data to file
PROGRAM*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
fp=fopen("a.txt","w");
if (fp==NULL)
{
printf("error opening file..\n");
exit(1);
}
else
{
fprintf(fp,"%s","Welcome\n");
fprintf(fp,"%s","to file handling in C\n");
}
printf("File Created...named a.txt");
fclose(fp);
}
/*(ii) Read data from file and print content on console
PROGRAM*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char t[100];
fp=fopen("a.txt","r");
if(fp==NULL)
{
printf("Error opening source file..");
exit(1);
}
printf("Content of File a.txt\n...................\n");
while(fscanf(fp,"%s",t)==1)
{
printf("%s\n",t);
}
fclose(fp);}
/*(iii) Append a file and display content on console
PROGRAM*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char t[100];
fp=fopen("a.txt","a");
if(fp==NULL)
{
printf("Error opening source file..");
exit(1);
}
printf("Enter the contents to append.................\n");
while(1)
{
fgets(t,sizeof(t),stdin);
if(strcmp(t,"end\n")==0) break;
fputs(t,fp);
}
fclose(fp);
fp=fopen("a.txt","r");
printf("File contents after appending...\n");
printf("********************************\n");
while(fgets(t,sizeof(t),fp)!=NULL)
{
printf("%s",t);
}
fclose(fp);
}

/*contributed by varun shetty CEK2021-2025*/
