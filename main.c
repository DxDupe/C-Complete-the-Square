#include <stdio.h>

int abs (int num) {
    if (num < 0) {
        return -num;
    }
    else {
        return num;
    }
}

int main () {
    int A, B, C;
    printf("Input A, B, C : ");
    scanf("%d %d %d", &A, &B, &C);
    for (int i = -abs(A); i <= abs(A); i++) {
        for (int j = -abs(A); j <= abs(A); j++) {
            if (i * j == A) {
                for (int k = -abs(C); k <= abs(C); k++) {
                    for (int l = -abs(C); l <= abs(C); l++) {
                        if (k * l == C) {
                            if (((i * l) + (k * j)) == B) {
                                if (i >= 0 && k >= l ) {
                                    printf("Result (a, b, c, d) = %d %d %d %d\n", i, k, j, l);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
