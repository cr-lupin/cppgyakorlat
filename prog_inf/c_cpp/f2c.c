#include <stdio.h>

int main() {
	int i;
	for (int i = 0; i < 200; i += 20) {
		printf("%d F = %f C\n", i, 5/9.*(i-32));
	}

	return 0;
}