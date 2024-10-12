#include <stdio.h>
#include <math.h>

long long n;

int main() {
	scanf("%d", &n);
	if (n % 400 == 0|| n % 100 == 0) printf("YES");
	else printf("NO");
	return 0;
}
