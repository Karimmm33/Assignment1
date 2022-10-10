#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	//Testing for hamming_distance function
	int x, y;
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
	int result = hammingDistance(x, y);
	printf("%u\n", result);


	//Testing for msb_lsb function
	int distance, n;
	printf("Input an integer: ");
	scanf("%d", &n);
	if (x < -2147483647 || x > 2147483647) {
		exit();
	}
	distance = (msb(x) - lsb(x));
	printf("%u\n", distance);

	//Testing for my_arrays.c (All functions)
	int a1[] = { 1,1,2,3,3,2,3,3,1,3 };
	printArray(a1);
	swapValues(a1, 1, 6);
	printf("\n");
	printArray(a1);
	int beforeSort = isSorted(a1);
	printf("Is the array sorted? : %d\n", beforeSort);
	bubbleSort(a1);
	printf("\n");
	printArray(a1);
	printf("\n");
	printHistogram(a1);
	printf("\n");
	int mostFreq = mode(a1);
	int middle = median(a1);
	int afterSort = isSorted(a1);
	printf("The most frequent element is : %d\n", mostFreq);
	printf("The median is : %d\n", middle);
	printf("Is the array sorted? : %d\n", afterSort);
	
	//Testing for my_pointers.c (merge function)
	char* arr1[2] = { "ab", "ac" };
	char* arr2[3] = { "za", "zb", "zzzzc" };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	merge(arr1, arr2, n1, n2);

	//Testing for more_arrays.c (concat function)
	char* arr[][100] = { {"I","LOVE","CODING"},{"THIS","IS","SPARTA"} };
	concat(arr, 6);
	return 0;
}