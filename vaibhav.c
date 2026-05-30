#include <stdio.h>

int main() {
    int n, temp, d, s;

    for (n = 100; n <= 800; n++) {
        temp = n;
        s = 0;

        while (temp > 0) {
            d = temp % 10;
            s = s + d * d * d;
            temp = temp / 10;
        }

        if (s == n)
            printf("%d is an Armstrong number\n", n);
    }

    return 0;
}
