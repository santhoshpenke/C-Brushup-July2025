#include<stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a % 3 == 0 && a % 5 == 0) {
        printf("Divisible by both 3 and 5\n");
    }
    else if(a % 3 == 0) {
        printf("Divisible only by 3\n");
    }
    else if(a % 5 == 0) {
        printf("Divisible only by 5\n");
    }
    else {
        printf("Not divisible by 3 or 5\n");
    }

    return 0;
}
