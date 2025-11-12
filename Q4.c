#include <stdio.h>

void updateValue(int x) {
    x += 5;
}
void updateReference(int *x) {
    *x += 5;
}

int main() {
    int num = 80;

    printf("Before updateValue: %d\n", num);
    updateValue(num);
    printf("After updateValue: %d\n", num);

    printf("Before updateReference: %d\n", num);
    updateReference(&num);
    printf("After updateReference: %d\n", num);

    return 0;
}
