#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int random_num = rand() % 1000 + 1;

    int guess_count = 0;

    int input;
    printf("Guess the number between 1 and 1000: ");
    do
    {
        scanf("%d", &input);
        guess_count++;

        if (input < random_num) {
            printf("Too low! Try again.\n");
        } else if (input > random_num) {
            printf("Too high! Try again.\n");
        }
    } while (input != random_num);

    printf("Congratulations! You guessed the number in %d attempts.\n", guess_count);
    if (guess_count < 10) {
        printf("Either you know the secret or you got lucky!\n");
    } else if (guess_count == 10) {
        printf("Ahah! You know the secret!\n");
    } else {
        printf("You should be able to do better!\n");
    }
    
    return 0;
}
