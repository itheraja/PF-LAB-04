#include <stdio.h>

int main() {
    int scoops, cone;
    printf("Number of scoops: ");
    scanf("%d", &scoops);
    printf("Cone type (1=Regular, 2=Waffle): ");
    scanf("%d", &cone);

    if (scoops == 3 && cone == 2) {
        printf("You get a free topping!\n");
    } else {
        printf("No free topping.\n");
    }
    return 0;
}
