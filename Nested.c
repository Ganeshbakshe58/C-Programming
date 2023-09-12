/*WAP to copy one structure into another. Use concept of nested structures.
    a. Create Employee structure having attributes as id, name and basic salary.
    b. Create Date structure having attributes as dd, mm, yy.
    c. Nest Date structure into Employee as to display joining date of employee.*/
#include <stdio.h>
#include <string.h>
struct Employee{
    int empid;
    char name[20];
    float salary;
    struct Date{
        int dd, mm, yy;
    } doj;
} e1;

void main(){
    e1.empid = 100;
    strcpy(e1.name, "Ganesh");
    e1.salary = 75000.00;
    e1.doj.dd = 24;
    e1.doj.mm = 8;
    e1.doj.yy = 2023;
    printf("Employee Id: %d\n", e1.empid);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Salary: %f\n", e1.salary);
    printf("Date of Joining : %d-%d-%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yy);
}