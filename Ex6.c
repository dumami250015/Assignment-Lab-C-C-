#include <stdio.h>
#include <math.h>

int n, a, sum = 0;

int main() {
	scanf("%d", &n);
	a = n;
	while (a) {
		sum = sum + (a % 10) * (a % 10) * (a % 10);
		a /= 10;
	}
	if (sum == n) printf("YES");
	else printf("NO");
	return 0;
}
