#include <stdio.h> // Includes the standard input/output library

int main() { // The main function, where program execution begins
    printf("Hello, World!\n"); // Prints the string "Hello, World!" to the console
    int num1, num2, sum; // Declares three integer variables

    printf("Enter first number: "); // Prompts the user for input
    scanf("%d", &num1); // Reads an integer from the user and stores it in num1

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2; // Calculates the sum

    printf("Sum = %d\n", sum); // Prints the sum

    return 0; // Indicates successful program execution
}
