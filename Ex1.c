#include <stdio.h>
#include <math.h>
// -3 5 -2 9 8 10 5 -1 0
int n, maxn = -1e8, minn = 1e8;

int main() {
    while (1) {
    	scanf("%d", &n);
    	if (!n) break;
        if (n > maxn) maxn = n;
        if (n < minn) minn = n;
    }
    printf("Min: %d\n", minn);
    printf("Max: %d", maxn);
    return 0;
}
