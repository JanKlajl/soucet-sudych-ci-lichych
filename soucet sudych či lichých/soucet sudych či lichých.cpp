#include <stdio.h>

int soucet(cislo) {
    int sudy = 0;
    for (int i = 0; i <= cislo; i += 2) {
        sudy += i;
    }
    return sudy;
}

int main() {
    printf("Soucet sudych: %d\n", soucet(6));
}
