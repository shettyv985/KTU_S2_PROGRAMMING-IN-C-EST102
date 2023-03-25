/*Read a string (ending with a $ symbol), store it in an array and count thenumber of vowels, consonants and spaces in it.
ALGORITHM
1. Start
2. Read the string to str
3. vowels=0,Consonant=0,space=0,i=0
4. if(str[i]!=’\0’) then goto step 5 else goto step 9
5. if (str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] ==
'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'
||str[i] == 'U') then vowels=vowels+1 else goto step 6
6. if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) then
consonant =consonant+1 else goto step 7
7. if (str[i] == ' ') then space=space +1 and goto step 8
8. i=1+1,goto step 4
9. Print vowels,Consonant,space
10.Stop*/
#include <stdio.h>
void main()
{
char line[150];
int vowels, consonant, space,i;
vowels = consonant = space = 0;
printf("Enter line of string:(end with $)");
gets(line);
for (i = 0; line[i] != '$'; ++i)
{
if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
line[i] == 'U')
{
++vowels;
}
else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
{++consonant;
}
else if (line[i] == ' ')
{
++space;
}
}
printf("Vowels: %d", vowels);
printf("\nConsonants: %d", consonant);
printf("\nWhite spaces: %d", space);
}

/*contributed by varun shetty CEK2021-2025*/
