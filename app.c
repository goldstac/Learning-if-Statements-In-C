#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if (age >= 18) {
        printf("You Are An Adult");
    }
    else{
        printf("You Arent An Adult Yet");
    }
    return 0;
}
