// Function without parameters and without return value
#include <stdio.h>
void volumeWithoutParamsAndReturn() {
    float r = 5.0; // Radius
    float h = 10.0; // Height
    float volume = 3.14 * r * r * h;
    printf("Volume of cylinder: %.2f\n", volume);
}

int main() {
    // Call function without parameters and without return value
    volumeWithoutParamsAndReturn();
    return 0;
}