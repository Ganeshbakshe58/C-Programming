// Function with parameter and without return value
#include <stdio.h>  
void volumeWithParamAndWithoutReturn(float r, float h) {
    float volume = 3.14 * r * r * h;
    printf("Volume of cylinder: %f\n", volume);
}

int main() {
    // Call function with parameters and without return value
    float radius = 4.0;
    float height = 8.0;
    volumeWithParamAndWithoutReturn(radius, height);
    return 0;
}
