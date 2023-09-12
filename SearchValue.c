// Write a program to search particular value in an array and return the index number where it is located
#include <stdio.h>
int main() {
    int arr[5] = {1,2,4,5,6};
    int n, searchValue;

    printf("Enter the value to search: ");
    scanf("%d", &searchValue);

    // Search for the value in the array
    int found = 0; // Flag to indicate if the value is found
    int index;     

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            found = 1;  // Value found
            index = i;  // Store the index
            break;      
        }
    }
    if (found) {
        printf("Value %d found at index %d\n", searchValue, index);
    } 
    else {
        printf("Value %d not found in the array\n", searchValue);
    }
    return 0;
}