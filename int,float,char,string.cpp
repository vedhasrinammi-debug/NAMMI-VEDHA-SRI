#include <stdio.h>

int main() {
    int integer;
    float decimal;
    char character;
    char string[100];
    
    // Read all inputs using scanf
    printf("Enter an integer: ");
    scanf("%d", &integer);
    
    printf("Enter a float: ");
    scanf("%f", &decimal);
    
    printf("Enter a character: ");
    scanf(" %c", &character);  // Space before %c skips whitespace
    
    printf("Enter a string: ");
    scanf("%s", string);       // No & for string (array name is pointer)
    
    // Display all values using printf
    printf("");
    printf("Integer: %d", integer);
    printf("Float: %.2f", decimal);
    printf("Character: %c", character);
    printf("String: %s\n", string);
    
    return 0;
}
