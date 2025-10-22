#include <stdio.h>
#include <string.h>
int main() {
    char username[15];
   char password[50];
    printf("Login Page\n");
    printf("Enter Your Username\n");
    scanf("%s",username);
    printf("Enter Your Password\n"); 
    scanf("%s",password);
    if (strcmp(username, "admin") == 0 && strcmp(password,"adminsecretpassword") == 0) {
        printf("Welcome Back %s \n",username);
    }
    else{
        printf("Wrong Username Or Password\n");
    }  
    return 0;
}
