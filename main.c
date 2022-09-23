#include <stdio.h>
#include <stdbool.h>
#include "api.h"

const int LICENSE_KEY_SIZE = 100;
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
    provide_user_interface(user_email);

    connect();

    return 0;
}

void provide_user_interface(const char* user_email) {
    printf("1. Open Abobe Photobop\n");
    printf("2. Open Abobe website\n");
    printf("3. Enter and claim a license key\n");
    printf("4. Purchase a license key\n");
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
        char license_key[LICENSE_KEY_SIZE];
        printf("Please enter your license key: ");
        scanf("%s", license_key);
        printf("\n");

        get_license_key(user_email);

        printf("Not yet implemented..\n");
        break;

    case 4:
        printf("Not yet implemented..\n");
        break;
    
    default:
        printf("Invalid input.\nPlease try again..\n");
        provide_user_interface(user_email);
        break;
    }
}
