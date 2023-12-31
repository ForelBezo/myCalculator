#include <stdio.h>
#include <strings.h>  // Use strings.h for strcasecmp

int main() {
    char answer[] = "paris";
    char userAnswer[20];
    int attempt = 0;

    while (attempt < 3) {
        printf("What is the capital of France? \n");
        scanf(" %s", userAnswer);

        // Use strcasecmp for case-insensitive string comparison
        if (strcasecmp(userAnswer, answer) == 0) {
            printf("Great! , you are rightis Paris\n");
            break;
        } else {
            printf("Attempt again, maybe the next one is right!\n");
            attempt++;
        }
    }

    if (attempt == 3) {
        printf("Sorry, you've exhausted all attempts. The correct answer is 'Paris'.\n");
    }

    return 0;
}
