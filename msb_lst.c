//Test cases:
//1- Tested for all integers (array of size 32) in case the user inputs 2147483647 as an integer
//2- Tested for integers bigger than 2147483647(exits the program) because its bigger than 32 bits
//3- Tested for integers less than -2147483648 (exits the program) because its bigger than 32 bits
//4- Tested for integers with 100 representation
//5- Tested for integers with 101 representation
//6- Tested for integers with 110 representation
//7- Tested for integers with 011 representation

//Specifications:
//Requires: an integer between -4294967295 and 4294967295
//Effects: returns distance between most significant bit and least significant bit and exits if the range of the integer is not respected.
#include <stdio.h>
int msb(int x) {
	int arr[32];
	int temp = 0;
	int n = 1 << 31;
	for (int i = 0; i <= 31; i++) {
		if (x & n) {
			arr[temp] = 1;
		}
		else {
			arr[temp] = 0;
		}
		temp++;
		x = x << 1;
	}
	int pos = (sizeof(arr) / sizeof(arr[0]))-1;
	for (int i = (sizeof(arr) / sizeof(arr[0]))-1; i >= 0; i--) {
		if (arr[i] != 1) {
			pos = pos - 1;
		}
		else if (arr[i] == 1) {
			return pos;
		}
	}
	return pos;
}
int lsb(int x) {
	int arr[32];
	int temp = 0;
	int n = 1 << 31;
	for (int i = 0; i <= 31; i++) {
		if (x & n) {
			arr[temp] = 1;
		}
		else {
			arr[temp] = 0;
		}
		temp++;
		x = x << 1;
	}
	int pos = 0;
	for (int i = 0; i <= 31; i++) {
		if (arr[i] != 1) {
			pos = pos + 1;
		}
		else if (arr[i] == 1) {
			return pos;
		}
	}
	return pos;
}