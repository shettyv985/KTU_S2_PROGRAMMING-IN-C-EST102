/*Declare a union containing 5 string variables (Name, House Name, City Name,
State and Pin code) each with a length of C_SIZE (user defined constant). Then,
read and display the address of a person using a variable of the union.
ALGORITHM
1. Start
2. Define a variable C_SIZE with a constant value.
3. Declare a structure union with a variable emp and union members
Name, House_Name, City_Name, State and Pin code
4. Read name using union variable emp
5. Print name using union variable emp
6. Read House_Name, using union variable emp
7. Print House_Name, using union variable emp
8. Read City_Name using union variable emp.
9. Print City_Name using union variable emp.
10.Read State using union variable emp.
11.Print state using union variable emp.
12.Read pin_code using union variable emp.
13.Print pin_code using union variable emp.
14.Stop*/
#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
char name[C_SIZE];
char hname[C_SIZE];
char cityname[C_SIZE];
char state[C_SIZE];
char pin[C_SIZE];
};
int main()
{
union Address record1;
printf("Enter name:");
scanf("%s",record1.name);
getchar();
printf("Enter house name:");
scanf("%s",record1.hname);
getchar();
printf("Enter city name:");
scanf("%s",record1.cityname);
getchar();
printf("Enter state name:");
scanf("%s",record1.state);
getchar();
printf("Enter pin:");
scanf("%s",record1.pin);
printf("Union record1 values ....\n");
printf(" Name: %s \n", record1.name);
printf(" House Name : %s \n", record1.hname);
printf(" City Name: %s \n", record1.cityname);
printf(" State name : %s \n", record1.state);
printf(" Pin: %s \n", record1.pin);
}

/*contributed by varun shetty CEK2021-2025*/
