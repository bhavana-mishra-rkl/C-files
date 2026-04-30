#include <stdio.h>
void EvenSqrRev(int n) {
    if (n <= 0) return ;
    int even = 2 * n;
    printf("%d ", even * even);
	EvenSqrRev(n - 1);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Squares in reverse order: ");
    EvenSqrRev(n);
}
