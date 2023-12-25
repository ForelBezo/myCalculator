#include <stdio.h>

int main()
{
    printf("===== MENU =====\n 1. Crispy Onion Beef\n 2. Big Montain\n 3. Caesar Salad\n 4. Surprise\n Give me the number your menu then Enjoy!\n");

    int menu;
    printf("Enter the number of your menu: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Good choice! The Crispy Onion Beef is unique!\nEnjoy!\n");
        break;
    case 2:
        printf("Big Mountain is a great choice!\nEnjoy!\n");
        break;
    case 3:
        printf("Caesar Salad is a healthy choice!\nEnjoy!\n");
        break;
    case 4:
        printf("Surprise! Enjoy the surprise dish!\n");
        break;
    default:
        printf("Nothing has been chosen.\n");
        break;
    }

    return 0;
}
