#include <stdio.h>
#include <stdlib.h>

#include "home.h"

void home() {
    int choice;
    printf("\nFollowing are the stations:");
    printf("\n1. Huda City Centre");
    printf("\n2. Patel Chowk");
    printf("\n3. INA");
    printf("\n4. Hauz Khas");
    printf("\n5. Mandi House");
    printf("\n6. Rajiv Chowk");
    printf("\n7. Kashmere Gate");
    printf("\n8. Chandni Chowk");
    printf("\n9. New Delhi");
    printf("\n10. Rajendra Place");
    printf("\n11. Lajpat Nagar");

    char *s;
    char *d;
    while (1) {
        printf("\n");
        printf("\n1. Starting and Destination Point");
        printf("\n2. Find Shortest Route");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    switch (choice) {
            case 1:
                printf("\nEnter Starting Station: ");
                scanf("%s",&s);
                printf("\nEnter Destination Station: ");
                scanf("%s",&d);
                break;
            case 2:
                // function
                printf("\nIn Progress");
                break;
            case 3:
                printf("\nThanks for Visiting. Goodbye!\n");
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}