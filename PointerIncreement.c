// Demonstrate pointer arithmetic by assigning pointer “ptr” to variable “a” which is having value as 100 in it.Perform increment operation on pointer ptr like ptr=ptr+2 and display which address that pointer ptr hold.

#include <stdio.h>
void main() {
    int a = 100;
    int *ptr = &a; // Assign ptr to the address of variable a

    printf("Old address of ptr: %d\n", ptr);

    ptr = ptr + 2; // Increment 
    printf("New address of ptr: %d\n", ptr);
}