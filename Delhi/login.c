#include <stdio.h>
#include <stdlib.h>

#include "login.h"

void login(){
    char name[20];
    char password[20];
    printf("\nEnter Your Name: ");
    scanf("%s",&name);
    printf("Enter Password: ");
    scanf("%s",&password);
    search(name, password);
}