#include <stdio.h>

int main() {
    // Declaration of variables of different data types
    int integerVar;           // typically 4 bytes
    float floatVar;           // typically 4 bytes
    double doubleVar;         // typically 8 bytes
    char charVar;             // typically 1 byte
    long int longIntVar;      // typically 8 bytes (may vary with system)
    short int shortIntVar;    // typically 2 bytes (may vary with system)

    // Scanning user input for each variable
    printf("Enter an integer: ");
    scanf("%d", &integerVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a double: ");
    scanf("%lf", &doubleVar);

    printf("Enter a character: ");
    scanf(" %c", &charVar);

    printf("Enter a long integer: ");
    scanf("%ld", &longIntVar);

    printf("Enter a short integer: ");
    scanf("%hd", &shortIntVar);

    // Printing the values of each variable
    printf("\nYou entered:\n");
    printf("Integer: %d\n", integerVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("Long Integer: %ld\n", longIntVar);
    printf("Short Integer: %hd\n", shortIntVar);

    return 0;
}
