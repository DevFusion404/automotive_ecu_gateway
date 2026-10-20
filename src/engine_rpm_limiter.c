#include <stdio.h>

int check_engine_redline(int current_rpm) {
    if (current_rpm >= 6500) {
        return 1;
    }
    return 0;
}

int main() {
    printf("Redline: %d\n", check_engine_redline(6600));
    return 0;
}
