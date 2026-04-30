#include <stdio.h>

int multiply(int x, int y) {
    if (y <= 0) return 0;
    return x + multiply(x, y - 1);
}

int main() {
    int x, y;
    printf("Enter two numbers (x y): ");
    scanf("%d %d", &x, &y);
    printf("%d * %d = %d\n", x, y, multiply(x, y));
    return 0;
}
