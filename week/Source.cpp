#include<stdio.h>
void cal() {
	printf("please enter number : ");
	int a, b, x = 0;
	float d{};
	scanf_s("%d %d", &a, &b);
	while (a == b) {
		printf("please enter number again : "); 
		scanf_s("%d %d", &a, &b);
	}
	if (b < a) {
		for (; b <= a; a--) {
			printf("%d ", a);
			x += 1;
			d += a;
		}
		printf("\nMean = %.2f", d / x);
	}
	else if (a < b) {
		for (; a <= b; a++) {
			printf("%d ", a);
			x += 1;
			d += a;
		}
		printf("\nMean = %.2f", d / x);
	}
}
int main() {
	cal();
	return 0;
}