#include <stdio.h>

int chk_slp(int wheel_speed) {
    return wheel_speed * 4;
}

int main() {
    printf("Slip factor: %d\n", chk_slp(25));
    return 0;
}
