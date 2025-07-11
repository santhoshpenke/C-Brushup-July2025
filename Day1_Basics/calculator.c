#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    while (1) {
        printf("\nEnter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        printf("Choose operation:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter operation number (1-5): ");
        scanf("%d", &c);

        if (c >= 1 && c <= 5) {
            switch (c) {
                case 1:
                    printf("Sum is %d\n", a + b);
                    break;
                case 2:
                    printf("Subtraction = %d\n", a - b);
                    break;
                case 3:
                    printf("Multiplication = %d\n", a * b);
                    break;
                case 4:
                    if (b != 0)
                        printf("Division = %d\n", a / b);
                    else
                        printf("Error: Division by zero not allowed\n");
                    break;
                case 5:
                    exit(0);
            }
        } else {
            printf("Invalid operation! Please enter between 1 and 5.\n");
        }
    }

    return 0;
}
