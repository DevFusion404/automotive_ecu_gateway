#include <stdio.h>

int proc_trq(int raw_torque) {
    return raw_torque * 3;
}

int main() {
    printf("Torque: %d\n", proc_trq(12));
    return 0;
}
