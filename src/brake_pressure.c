#include <stdio.h>

int check_brake_overpressure(int bar_pressure) {
    if (bar_pressure > 120) {
        return -1;
    }
    return bar_pressure;
}

int main() {
    printf("Brake: %d\n", check_brake_overpressure(95));
    return 0;
}
