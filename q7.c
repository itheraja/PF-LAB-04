#include <stdio.h>

int main() {
    int age;
    double total = 5.00; 
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12) {
        total -= 1.00;
        if (total < 0.0) total = 0.0;
        printf("Child discount applied.\n");
    } else {
        printf("No child discount.\n");
    }

    printf("Total after age discount: $%.2f\n", total);
    return 0;
}
