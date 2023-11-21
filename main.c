#include <stdio.h>
#include <stdlib.h>

#include "reg.h"
#include "login.h"
#include "del.h"
#include "home.h"
#include "shome.h"
#include "search.h"
#include "supervisor.h"

int main(){
    printf("\n\tWelcome to Delhi Metro System\n");
    int choice;
    while(1){
        printf("\nEnter 1 to Register\n");
        printf("Enter 2 to Login\n");
        printf("Enter 3 to Login as Supervisor\n");
        printf("Enter 4 to Log Out\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                reg();
                break;
            case 2:
                login();
                break;
            case 3:
                supervisor();
                break;
            case 4:
                printf("\nLogging Out....");
                exit(0);
            default: 
                printf("Invalid Input");
        }
    }
    return 0;
}