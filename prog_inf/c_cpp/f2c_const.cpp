#include <iostream>

const L = 0;
const H = 200;
const LOOP = 20;

int main() {
	for (int i = L; i < H; i += LOOP) {
		std::cout << i << " F = " << 5/9.*(i-32) << std::endl;
	}
}