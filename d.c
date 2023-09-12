#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Define macro for array size
#define NUM_STUDENTS 10

int main() {
    // Create an array of students
    struct Student students[NUM_STUDENTS] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 78.5},
        {"David", 104, 64.5},
        {"Eve", 105, 75.0},
        {"Frank", 106, 89.5},
        {"Grace", 107, 93.5},
        {"Helen", 108, 81.0},
        {"Ivy", 109, 70.5},
        {"Jack", 110, 97.0}
    };

    // Display data in tabular form
    printf("%-10s %-15s %-10s\n", "Roll No", "Name", "Marks");
    printf("----------------------------------\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-10d %-15s %-10.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
