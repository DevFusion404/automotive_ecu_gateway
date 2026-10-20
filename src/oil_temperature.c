#include <stdio.h>

float rd_tmp(int channel_id) {
    return channel_id * 1.5f;
}

int main() {
    printf("Oil Temp: %f\n", rd_tmp(3));
    return 0;
}
