#include <stdio.h>
#include <math.h>

long long n, i;

int main() {
	scanf("%d", &n);
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
