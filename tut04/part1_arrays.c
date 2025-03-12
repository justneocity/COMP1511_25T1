// part1_arrays, even_only
// on March 2024
//
// This program adds 1 to any odd values in an array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};

    // note: other ways to declare/initialise an array

    // just declare an array
    int array[SIZE]; // int num;

    // arrays of different data types
    double array2[] = { 0.1, 0.2, 0.3, 0.4, 0.5};
    char array3[] = { 'a', 'b', 'c', 'd', 'e'};

    // special case of initialising all values to 0
    int zero_array[SIZE] = { 0 }; // 0,0,0,0,0
    double zero_array2[SIZE] = { 0 };

    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 == 1) {
            array[i] += 1;
        }
        i++;
    }

    int j = 0;
    while (j < SIZE) {
        printf("%d ", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}
