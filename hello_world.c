#include <stdio.h> // Includes the standard input/output library

int main() { // The main function, where program execution begins
    printf("Hello, World!\n"); // Prints the string "Hello, World!" to the console
    int num1, num2, sum; // Declares three integer variables

    printf("Enter first number: "); // Prompts the user for input
    scanf("%d", &num1); // Reads an integer from the user and stores it in num1

    printf("Enter second number: ");
    scanf("%d", &num2);

    sumOfTwoNumbers(num1, num2); // Calls the function to calculate the sum of two numbers

    printf("Enter a number to check if it is odd or even: "); // Prompts the user for a number
    int number;
    scanf("%d", &number); // Reads an integer from the user
    oddOrEven(number); // Calls the function to check if the number is odd or even

    return 0; // Indicates successful program execution
}


void sumOfTwoNumbers(int a, int b) { // Function to calculate the sum of two numbers
    int result = a + b; // Calculates the sum
    printf("Sum of %d and %d is %d\n", a, b, result); // Prints the result
} // End of function definition

void oddOrEven(int number) { // Function to check if a number is odd or even
    if (number % 2 == 0) { // Checks if the number is even
        printf("%d is even\n", number); // Prints that the number is even
    } else {
        printf("%d is odd\n", number); // Prints that the number is odd
    }
} // End of function definition