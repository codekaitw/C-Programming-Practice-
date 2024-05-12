#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a 'nickname'
// typedef char username[15];

typedef struct{
    char name [15];
    int age;
} User;

int main() {
    // username personOneName = "John";
    // printf("%s\n", personOneName);
    
    User personOne = {"John", 10};
    printf("%s %d\n", personOne.name, personOne.age);

    return 0;
}