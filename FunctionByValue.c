// Create a structure Employee. Pass it to a function by value.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee{
    int empid;
    char *name;
    float salary;
};
void display(struct employee e){
    printf("\nEmployee Information:\n");
    printf("Id: %d ", e.empid);
    printf("\nName: %s ", e.name);
    printf("\nSalary: %f ", e.salary);
}
int main(){
    struct employee e;
    printf("Enter employee id: ");
    scanf("%d", &e.empid);
    printf("Enter employee name: ");
    e.name = (char *)malloc(30 * sizeof(char));
    scanf("%s", e.name);
    printf("Enter employee salary: ");
    scanf("%f", &e.salary);
    display(e);
    return 0;
}