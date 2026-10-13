#include <stdio.h>
int main() {
    int n;
    int i;
    int category;
    int regular = 0;
    int premium = 0;
    int recliner = 0;
    float total = 0;
    float finalAmount = 0;
    printf("Enter the number of tickets: ");
    scanf("%d", &n);
    for ( i=0; i<n; i++) {
        printf("Enter the category of ticket (1 for regular, 2 for premium, 3 for recliner): ");
        scanf("%d", &category);
        if (category == 1) {
            regular++;
            total += 150;
        } else if (category == 2) {
            premium++;
            total += 250;
        } else if (category == 3) {
            recliner++;
            total +=400;
        } else {
            printf("Invalid category. Please enter a valid category (1, 2, or 3).\n");
            i--; // repeat the iteration for invalid input

        }
        }
        printf("\n ----Final bill---- \n");
        printf("regualar tickets: %d\n", regular);
        printf("premium tickets: %d\n", premium);
        printf("recliner tickets: %d\n", recliner);
        printf("Total amount: %.2f\n", total);

        if (total >= 5) {
            finalAmount = total - (total * 0.10); 
            printf("Discount applied\n");

        } else{
            finalAmount = total;
            printf("No discount applied\n");

        }
        printf("final amount to be paid: %.2f\n",finalAmount);

        }
        
        

    
