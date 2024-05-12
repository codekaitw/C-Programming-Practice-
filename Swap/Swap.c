#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x = 'x';
    char y = 'y';

    char temp = x;
    x = y;
    y = temp;
    printf("%c %c\n", x, y);

    // consider the size of the string
    char liquid[15] = "water";
    char flavor[15] = "apple";
    char tempString[15];

    strcpy(tempString, liquid);
    strcpy(liquid, flavor);
    strcpy(flavor, tempString);

    printf("%s %s\n", liquid, flavor);

    return 0;
}