#include <stdio.h>

void printSquaresReverse(int n) {
    if (n <= 0) return;
    int even = 2 * n;
    printf("%d ", even * even);
    printSquaresReverse(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Squares in reverse order: ");
    printSquaresReverse(n);
    printf("\n");
    return 0;
}
