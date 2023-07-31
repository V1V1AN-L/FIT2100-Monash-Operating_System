#include <stdio.h>

int main() {
    printf("Please enter your name:\n");
    char firstName[20];
    char lastName[20];
    scanf("%s %s", &firstName, &lastName);
    printf("%c %c", firstName[0], lastName[0]);

    return 0;
}

