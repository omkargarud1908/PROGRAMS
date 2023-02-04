#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct address
{
    char house[30];
    int number;
    char street[20];
};
struct employee
{
    char name[20];
    int age;
    int salary;
    struct address ad;
}emp, *emp_ptr;

int main()
{
    struct employee emp;
    emp_ptr=&emp;
    printf("\nName of employee: ");
    scanf("%s",emp_ptr->name);
    printf("\nAge of employee: ");
    scanf("%d",&emp_ptr->age);
    printf("\nSalary of employee: ");
    scanf("%d",&emp_ptr->salary);
    printf("\nHouse of employee:");
    scanf("%s",emp_ptr->ad.house);
    printf("\nNumber of employee: ");
    scanf("%d",&emp_ptr->ad.number);
    printf("\nStreet of employee:");
    scanf("%s",emp_ptr->ad.street);

    printf("\nName of employee:%s",emp_ptr->name);
    printf("\nAge of employee:%d",emp_ptr->age);
    printf("\nSalary of employee:%d",emp_ptr->salary);
    printf("\nHouse of employee:%s",emp_ptr->ad.house);
    printf("\nNumber of employee:%d ",emp_ptr->ad.number);
    printf("\nStreet of employee:%s",emp_ptr->ad.street);

    return 0;
}
