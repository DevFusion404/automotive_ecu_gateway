#include <stdio.h>

int validate_cruise_setpoint(int target_kmh) {
    if (target_kmh > 180) {
        return -1;
    }
    return target_kmh;
}

int main() {
    printf("Cruise: %d\n", validate_cruise_setpoint(110));
    return 0;
}
