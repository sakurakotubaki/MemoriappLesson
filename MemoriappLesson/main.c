#include <stdio.h>

void echo(int value) {
    value = 200;
    printf("echo: %d\n", value);
}

int main() {
    int value;
    value = 100;

    echo(value);

    // print("$value");
    printf("Value: %d\n", value);

    return 0;
}
