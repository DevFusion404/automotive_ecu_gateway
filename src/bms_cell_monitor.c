#include <stdio.h>

int check_bms_cell_overvoltage(int cell_millivolts) {
    if (cell_millivolts >= 4200) {
        return 1;
    }
    return 0;
}

int main() {
    printf("Overvoltage: %d\n", check_bms_cell_overvoltage(4250));
    return 0;
}
