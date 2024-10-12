#include <stdio.h>
#include <math.h>

long long n, ans = 1, i;

int main() {
	scanf("%d", &n);
	if (n % 2 == 0) {
		for (i = 2; i <= n; i += 2) {
			ans *= i;
		}
		printf("%d", ans);
	}
	else {
		for (i = 1; i <= n; i += 2) {
			ans *= i;
		}
		printf("%d", ans);
	}
	return 0;
}
