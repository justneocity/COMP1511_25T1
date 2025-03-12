// functions.c
//
// March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function prototype
int add(int number1, int number2);

int main(void) {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    result = add(num1, num2);

    // can also call the function multiple times with more values
    int num3 = 10;
    int num4 = 11;
    int result2 = add(num3, num4);

    // can also pass in numbers directly
    int result3 = add(2,4);

    printf("Result: %d, Result2: %d\n", result, result2);
    return 0;
}

// Function definition
int add(int number1, int number2) {
    // Function body
    int sum = number1 + number2;
    // return statement
    return sum;
}

