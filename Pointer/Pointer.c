#include <stdio.h>

void printAge(int *pAge) {
    printf("Your age is %d\n", *pAge); // dereference
}

int main() {
    // Memory RAM: like street
    // Memory block: ike house (person)
    // Memory address: like  house address(mailbox)
    // pointer = a "variable-like" reference that hold a memory address to another variable
    // & = address of operator
    // * = value at address: dereference operator (indirection operator)

    int age = 21;
    //int *pAge = &age; // 8 bytes for store a hexadecimal memory address
    int *pAge = NULL; // good practice to assign NULL if declaring a pointer
    pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %lu bytes\n", sizeof(age));
    printf("size of pAge: %lu bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);

    printAge(pAge);

    return 0;
}