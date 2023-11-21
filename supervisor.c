#include <stdio.h>
#include <stdlib.h>

#include "supervisor.h"

void supervisor(){
    char sname[20] = "Shivang";
    char spassword[20] = "1234";
    char name[20];
    char password[20];
    printf("\nWelcome\n");
    printf("\nEnter Name: ");
    scanf("%19s",&name);
    printf("Enter Password: ");
    scanf("%19s",&password);
    if(strcmp(name,sname)==0 && strcmp(password,spassword)==0){
        printf("\nLogin Successfully!\n");
        shome();
    }
    else{
        printf("\nInvalid Input!\n"); 
    }
}