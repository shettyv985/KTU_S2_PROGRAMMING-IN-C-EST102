/*Using structure, read and print data of n employees (Name, Employee Id and
Salary)
ALGORITHM
1. Start
2. Declare a structure employee with a variable emp and structure
members name, e_id and salary
3. read name, e_id and salary using structure variable emp.
4. print name, e_id and salary using structure variable emp.
5. stop
*/
#include <stdio.h>
struct employee
{
char name[30];
int
empId;
float salary;
};
void main()
{
struct employee emp;
printf("\nEnter details :\n");
printf("Name ?:");
gets(emp.name);
printf("ID ?:");
scanf("%d",&emp.empId);
printf("Salary ?:");
scanf("%f",&emp.salary);
printf("\nEntered detail is:\n-------------------");
printf("\nName: %s" ,emp.name); printf("\nId:%d" ,emp.empId); 
printf("\nSalary:%f\n",emp.salary);
}

/*contributed by varun shetty CEK2021-2025*/
