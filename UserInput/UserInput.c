#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    int age;
    printf("What is your name?\n");
    // scanf("%s", name);
    fgets(name, 20, stdin);  // input string with space
    name[strlen(name) - 1] = '/0';  // remove \n
    
    printf("\nHow old are you?\n");
    scanf("%d", &age);
    printf("\nHello %s!\n", name);
    printf("Your age is %d\n", age);
    return 0;
}