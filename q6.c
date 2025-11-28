#include <stdio.h>
int main() {
    int day;
    double total = 5.25; 
    printf("Enter day (1-7): ");
    scanf("%d", &day);

    if (day == 6 || day == 7) {
        total *= 0.90; 
        printf("Weekend discount applied.\n");
    } else if (day >= 1 && day <= 7) {
        printf("No weekend discount.\n");
    } else {
        printf("Invalid day.\n");
        return 0;
    }

    printf("Discounted total: $%.2f\n", total);
    return 0;
}
