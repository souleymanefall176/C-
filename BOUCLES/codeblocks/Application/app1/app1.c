#include <stdio.h>

int main() {
    int n = 9437;
    int s = 0;
    while(n != 0) {
        int r = n % 10;
        s = r + s * 10;
        n = n / 10;

    }
    printf("%d", s);
    return 0;
}
