#include <stdio.h>
#include <math.h>

long long n, ans = 1, i;

int main() {
	scanf("%d", &n);
	n *= 1000;
	if (n <= 2000) printf("15000 VND");
	else if (n > 2000 && n <= 30000) printf("%d VND", 15000 + ((n - 2000) / 250) * 2000);
	else printf("%d VND", 15000 + 224000 + ((n - 30000) / 1000) * 5000);
	return 0;
}
