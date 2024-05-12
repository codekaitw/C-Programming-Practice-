#include <stdio.h>
#include <string.h>

struct Player {
    char name[15];
    int score;
};

int main() {
    struct Player player1 = {"John", 10};
    printf("%s %d\n", player1.name, player1.score);

    struct Player player2;
    strcpy(player2.name, "Paul");
    player2.score = 15;
    printf("%s %d\n", player2.name, player2.score);

    return 0;
}