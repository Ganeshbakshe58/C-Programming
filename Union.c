// Demonstrate use of union and find out size of union variable and the attributes from union.
#include<stdio.h>
#include<string.h>
union variable{
    int num;
    char str[50];
};
void main(){
    union variable var;
    printf("Size of the integer data type is %d\n",sizeof(var));
    var.num=100;
    printf("num = %d\n",var.num);
    strcpy(var.str,"string copy");
    printf("Attribute from union = %s\n",var.str);
}