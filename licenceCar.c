#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter some information about yourself in order to check if you can get your Driving Licence Card\n");

    char name[50]; // Assuming a maximum length for the name
    printf("Enter your name: ");
    scanf("%49[^\n]", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (18 <= age) {
        printf("%s, great! You can pass for your driving licence.\n", name);
    }
     else {
        printf("%s,Sorry!\nJust waiting for %d years. Afterward, you can attempt to get your car licence.\n", name, 18 - age );
    }

    
    return 0;
}
