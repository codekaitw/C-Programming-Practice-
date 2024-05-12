#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prototypes
void printWeather(char[], double);

int main() {
    char* weather = "sunny";
    double temperature = 25.0;

    char* copy = strdup(weather);
    copy[0] = 'b';
    printf("%s\n", copy);
    free(copy);

    printWeather(weather, temperature);

    return 0;
}

void printWeather(char weather[], double temperature) {
    printf("Today's weather is %s.\n", weather);
    printf("The temperature is %.2lf!\n", temperature);
}