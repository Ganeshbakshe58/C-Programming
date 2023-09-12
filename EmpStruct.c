// Create a structure Employee. Accept data for 5 employees and display it.
#include<stdio.h>
#define max 10
struct emp{
    int id;
    char name[20];
    float sal;
};
int main(){
    int i;
    struct emp ep[5];
    printf("Enter Records of 5 Employee");
    printf("\nEnter the Emp_id , Emp_name , Salary : \n");
    for(i=0;i<5;i++){
        scanf("%d %s %f\n",&ep[i].id,&ep[i].name,&ep[i].sal);
    }
    printf("\nEmployee Information List : ");
    for(i=0;i<5;i++){
        printf("\n Emp_Id : %-5d Emp_name : %-10s Salary : %-10.5f " ,ep[i].id , ep[i].name , ep[i].sal);
    }
}