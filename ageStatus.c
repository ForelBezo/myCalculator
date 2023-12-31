#include <stdio.h>

int main ()
{
    printf("How old are you\n");
    int age;
    scanf("%d",&age);

    switch (age)
    {
        case 2: 
        printf("Salut bébé !");
        break;
        case 6: 
        printf("Salut gamin!");
        break;
        case 12:
        printf("Salut jeune!");
        break;
        case 16:
        printf("Salut ado!");
        break;
        case 18:
        printf("Salut adulte");
        break;
        case 68:
        printf("Salut papy!");
        break;
        default:
        printf("Je n'ai aucune réponse sur ton age ");
        break;
    }
    
}