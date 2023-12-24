#include <stdio.h>

int main() {
    int number, number1, result;
    char operation;  // Declare 'operation' before using it

    char addition = '+';
    char subtraction = '-';
    char multiplication = '*';

    printf("Enter the first number: ");
    scanf("%d", &number);

    printf("Enter the operation (+, -, *): ");
    scanf(" %c", &operation);  // Added a space before %c to consume any whitespace character

    printf("Enter the second number: ");
    scanf("%d", &number1);

    if (operation == addition) {
        result = number + number1;
        printf("The sum is: %d\n", result);
    } else if (operation == subtraction) {
        result = number - number1;
        printf("The result of subtraction is: %d\n", result);
    } else if (operation == multiplication) {
        result = number * number1;
        printf("The product is: %d\n", result);
    } else {
        printf("Invalid operation.\n");
    }

    return 0;
}
