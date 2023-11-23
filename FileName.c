#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    char nom[50];
    int age;

    printf("Bonjour, comment vous appelez-vous ?");
    scanf("%s", &nom);
    printf("Bonjour %s !\n", nom);

    printf("Quel est votre age ?");
    scanf("%d", &age);
    printf("vous avez %d !\n", age);
    sexecheck();
    return 0;
}

int sexecheck() {
    char sexe;
    printf("Entrez votre sexe (m ou f ou nb) : ");
    scanf(" %c", &sexe);
    if (sexe == 'm') {
        printf("Vous etes un homme.\n");
    }
    else if (sexe == 'f') {
        printf("Vous etes une femme.\n");
    }
    else if (sexe == 'n') {
        printf("Vous etes non binaire");
    }
    return 0;
}










