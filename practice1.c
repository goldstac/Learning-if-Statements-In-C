#include <stdio.h>
#include <string.h>
int main() {
    char admin_name[15];
    scanf("%s",admin_name);
    if (strcmp(admin_name,"admin") == 0) {
        printf("Welcome Back Admin\n");
    }
    else{
        printf("Access Denied\n");
    }
    return 0;
 }
