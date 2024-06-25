#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include "user.h"

#define MAX_NAME_LENGTH 50
#define MAX_CONTACT_LENGTH 10
#define MAX_EMAIL_LENGTH 50
#define MAX_CITY_LENGTH 200

// Validation function declarations
int isValidDate(const char *date);
int isValidGender(const char *gender);
int isValidContactNumber(const char *contactNumber);
int isValidEmail(const char *email);
int isValidUsername(const char *username);
int isValidPassword(const char *password);

#endif // COMMON_H
