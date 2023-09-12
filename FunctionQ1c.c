// Function without parameter and with return value
#include <stdio.h>  
float volumeWithoutParamAndWithReturn() {
    float r = 7.0; // Radius
    float h = 15.0; // Height
    float volume = 3.14 * r * r * h;
    return volume;
}

int main() {
    // Call function without parameter and with return value
    float result1 = volumeWithoutParamAndWithReturn();
    printf("Volume returned by function: %.2f\n", result1);
    return 0;
}
