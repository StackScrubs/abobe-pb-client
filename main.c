#include <stdio.h>
#include <stdbool.h>
#include "api.h"

const int MAX_EMAIL_SIZE = 64;
const int MAX_PASSWORD_SIZE = 64;

void provide_user_interface();

int main(int argc, char* argv) {
    printf("Welcome to Abobe Photobop!\nTo begin, please enter your user credentials.\n\n");

    char user_email[MAX_EMAIL_SIZE];
    printf("Email: ");
    scanf("%s", user_email);

    char user_password[MAX_PASSWORD_SIZE];
    printf("Password: ");
    scanf("%s", user_password);
    printf("\n");

    // Perform login check
    bool has_valid_credentials = true;
    if (!has_valid_credentials) {
        printf("Invalid user credentials!\nPlease try again or contact customer support.\nNow exiting...\n");
        return -1;
    }

    printf("Welcome!\nTo continue, please use the menu below:\n");
    provide_user_interface();

    connect();

    return 0;
}

void provide_user_interface() {
    printf("1. Open Abobe Photobop\n");
    printf("2. Open Abobe website\n");
    printf("3. Enter and claim a licence key\n");
    printf("4. Purchase a licence key\n");
    printf("\n");

    int input = 0;
    printf("Enter option: ");
    scanf("%d", &input);
    printf("\n");

    switch (input)
    {
    case 1:
        printf("Not yet implemented..\n");
        break;
        
    case 2:
        printf("Not yet implemented..\n");
        break;

    case 3:
        printf("Not yet implemented..\n");
        break;

    case 4:
        printf("Not yet implemented..\n");
        break;
    
    default:
        printf("Invalid input.\nPlease try again..\n");
        provide_user_interface();
        break;
    }
}