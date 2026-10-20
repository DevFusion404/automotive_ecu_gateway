#include <stdio.h>

double calculate_wheel_distance(double diameter) {
    return 3.14159 * diameter;
}

int main() {
    printf("Distance: %f\n", calculate_wheel_distance(0.65));
    return 0;
}
