#include <iostream>

int main() {
	for (int i = 0; i < 200; i += 20) {
		std::cout << i << " F = " << 5/9.*(i-32) << std::endl;
	}
}