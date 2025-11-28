#include <stdio.h>

int main() {
    int flavor, scoops, cone, day, age, payment;
    char sprinkles_char;
    double scoops_cost = 0.0;
    double cone_cost = 0.0;
    double sprinkles_cost = 0.0;
    double subtotal, after_age_discount, after_weekend_discount, final_total;

   
    printf("Choose a flavor (1. Vanilla, 2. Chocolate, 3. Strawberry): ");
    scanf("%d", &flavor);
    if (flavor < 1 || flavor > 3) {
        printf("Invalid flavor.\n");
        return 0;
    }

  
    printf("How many scoops? (1, 2, or 3): ");
    scanf("%d", &scoops);
    if (scoops == 1) scoops_cost = 2.00;
    else if (scoops == 2) scoops_cost = 3.50;
    else if (scoops == 3) scoops_cost = 4.50;
    else {
        printf("Invalid number of scoops.\n");
        return 0;
    }

  
    printf("Choose cone type (1. Regular +$0.50, 2. Waffle +$1.00): ");
    if (scanf("%d", &cone) != 1) return 0;
    if (cone == 1) cone_cost = 0.50;
    else if (cone == 2) cone_cost = 1.00;
    else {
        printf("Invalid cone type.\n");
        return 0;
    }

  
    printf("Do you want sprinkles? (Y/N): ");
    if (scanf(" %c", &sprinkles_char) != 1) return 0;
    if (sprinkles_char == 'Y' || sprinkles_char == 'y') sprinkles_cost = 0.75;
    else sprinkles_cost = 0.0;

   
    if (scoops == 3 && cone == 2) {
        // The lab asked only to print the message. We'll print it.
        // (Optional policy: you could waive sprinkles cost here; we will NOT change sprinkles cost automatically.)
        printf("You get a free topping!\n");
    }

  
    printf("Enter day number (1=Mon ... 7=Sun): ");
    if (scanf("%d", &day) != 1) return 0;
    if (day < 1 || day > 7) {
        printf("Invalid day.\n");
        return 0;
    }

    
    printf("Enter customer age: ");
    if (scanf("%d", &age) != 1) return 0;
    if (age < 0) {
        printf("Invalid age.\n");
        return 0;
    }

    
    printf("Payment method (1=Cash, 2=Card): ");
    if (scanf("%d", &payment) != 1) return 0;
    if (payment != 1 && payment != 2) {
        printf("Invalid payment method.\n");
        return 0;
    }

    
    subtotal = scoops_cost + cone_cost + sprinkles_cost;

   
    after_age_discount = subtotal;
    if (age < 12) {
        after_age_discount -= 1.00;
        if (after_age_discount < 0.0) after_age_discount = 0.0;
    }

    
    after_weekend_discount = after_age_discount;
    if (day == 6 || day == 7) {
        after_weekend_discount = after_age_discount * 0.90; // 10% off
    }

    
    final_total = after_weekend_discount;
    if (payment == 2) final_total += 0.50;

    
    printf("\n---- Ice Cream Receipt ----\n");
    printf("Flavor: ");
    if (flavor == 1) printf("Vanilla\n");
    else if (flavor == 2) printf("Chocolate\n");
    else printf("Strawberry\n");

    printf("Scoops: %d  (scoops cost: $%.2f)\n", scoops, scoops_cost);
    printf("Cone type: %s  (cone cost: $%.2f)\n", (cone == 1 ? "Regular" : "Waffle"), cone_cost);
    printf("Sprinkles: %s  (cost: $%.2f)\n", (sprinkles_cost > 0.0 ? "Yes" : "No"), sprinkles_cost);
    printf("Subtotal: $%.2f\n", subtotal);

    if (age < 12) printf("Child discount applied: -$1.00\n");
    printf("After age discount: $%.2f\n", after_age_discount);

    if (day == 6 || day == 7) printf("Weekend discount (10%%) applied.\n");
    printf("After weekend discount: $%.2f\n", after_weekend_discount);

    if (payment == 2) printf("Card processing fee: +$0.50\n");

    printf("Final total: $%.2f\n", final_total);
    printf("----------------------------\n");

    return 0;
}
