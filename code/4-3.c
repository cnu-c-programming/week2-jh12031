#include <stdio.h>

int main() {
    int n, primeCheck = 1;

    scanf("%d", &n);

    if (n < 2) {
        primeCheck = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                primeCheck = 0;
            }
        }
    }

    if (primeCheck) printf("true\n");
    else printf("false\n");

    return 0;
}
