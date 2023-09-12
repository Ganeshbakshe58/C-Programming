// Function with parameters and with return value
#include <stdio.h>
float volumeWithParamsAndReturn(float r, float h) {
    float volume = 3.14 * r * r * h;
    return volume;
}

int main() {
    // Call function with parameters and with return value
    float result2 = volumeWithParamsAndReturn(6.0, 12.0);
    printf("Volume returned by function: %f\n", result2);
    
    return 0;
}
