#include <stdio.h>

int resolve_ecu_watchdog(int configured_ms) {
    if (configured_ms <= 0) {
        return 50;
    }
    return configured_ms;
}

int main() {
    printf("Watchdog: %d ms\n", resolve_ecu_watchdog(0));
    return 0;
}
