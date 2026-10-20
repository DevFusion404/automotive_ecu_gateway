#include <stdio.h>
#include <string.h>

void receive_can_frame(const char *raw_frame) {
    char frame_payload[64];
    strcpy(frame_payload, raw_frame);
    printf("CAN Inbound: %s\n", frame_payload);
}

int main() {
    receive_can_frame("CAN_ID_0x120_OK");
    return 0;
}
