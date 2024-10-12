#include <stdio.h>
#include <math.h>

long long n;

int main() {
	scanf("%d", &n);
	while (n) {
		printf("%d ", n % 10);
		n /= 10;
	}
	return 0;
}
