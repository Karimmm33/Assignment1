// Test cases:
// 1- Tested for negative integers (if the user inputs a negative integer, the program will exit)
// 2- Tested for non integer inputs, (if the user inputs anything besides an integer, the program will exit)
// 3- Tested if x > y
// 4- Tested if y > x
// 5- Tested if x = y

// Specifications:
// Requires: user inputs 2 integers
// effects: returns hamming distance of these 2 integers, and exits if a negative integer is given.
#include <stdio.h>
int main() {
	int x, y, maximum;
	int result = 0;
	printf("Input the first integer: ");
	scanf("%d", &x);
	if (x < 0) {
		exit();
	}
	printf("Input the second integer: ");
	scanf("%d", &y);
	if (y < 0) {
		exit();
	}
	if (x >= y) {
		maximum = x;
	}
	else {
		maximum = y;
	}
	while (maximum) {
		int b1 = x & 1;
		int b2 = y & 1;
		if (b1 != b2)
			result += 1;
		maximum = maximum >> 1;
		x = x >> 1;
		y = y >> 1;
	}
	printf("%u\n", result);
	return 0;
}