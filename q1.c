#include <stdio.h>

int main() {
    int choice;
    printf("Choose a flavor (1. Vanilla, 2. Chocolate, 3. Strawberry): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You chose: Vanilla\n");
    } else if (choice == 2) {
        printf("You chose: Chocolate\n");
    } else if (choice == 3) {
        printf("You chose: Strawberry\n");
    } else {
        printf("Invalid flavor.\n");
    }
    return 0;
}
