#include <stdio.h>

double compute_gear_ratio_factor(double raw_ratio) {
    if (raw_ratio > 1000) {
        return raw_ratio * 0.95;
    }
    return raw_ratio;
}

int main() {
    printf("Factor: %f\n", compute_gear_ratio_factor(1100));
    return 0;
}
