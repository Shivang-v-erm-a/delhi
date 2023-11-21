#include "shome.h"

void shome(){
    int choice;
    char delConsumer[20];
    while(1){
    printf("\nEnter 1 to add Consumer\n");
    printf("Enter 2 to delete Consumer\n");
    printf("Enter 3 to Log Out\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            reg();
            break;
        case 2:
            printf("\nEnter the name of Consumer: ");
            scanf("%s", &delConsumer);
            del(delConsumer);
            break;
        case 3:
            printf("\nLogging Out...\n");
            return;
        default:
            printf("\nInvalid Input. Please try again.\n");
    }
    }
}