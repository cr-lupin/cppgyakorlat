#include <iostream>

#define L 0
#define H 200
#define LOOP 20

int main() {
	for (int i = L; i < H; i += LOOP) {
		std::cout << i << " F = " << 5/9.*(i-32) << std::endl;
	}
}