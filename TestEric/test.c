#include <stdio.h>

int main() {
    char prenom[50];
    int age;

    // Demander le prénom
    printf("Quel est ton prénom ? ");
    scanf("%s", prenom);

    // Demander l'âge
    printf("Quel est ton âge ? ");
    scanf("%d", &age);

    // Calcul de l'âge dans 10 ans
    int age_dans_10_ans = age + 10;

    // Affichage du résultat
    printf("Bonjour %s, tu auras %d ans dans 10 ans.\n", prenom, age_dans_10_ans);

    return 0;
}
