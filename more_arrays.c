#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//Specifications:
//Requires: A 2d array of strings and the size of the array.
//Effects: Returns a 1D array containing the concatenation of elements in each row of the 2D array
void concat(char* a[][100], int n1) {
    char* result[100];
    int k = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[k] = a[i][j];
            k++;
        }
    }
    for (int i = 0; i < n1; i++) {
        printf("%s ",result[i]);
    }
}