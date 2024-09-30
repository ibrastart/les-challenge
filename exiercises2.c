#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);
    int tableau[n]; 
    for (int i = 0; i < n; i++) {
        printf("Entrez les éléments du tableau : ");
        scanf("%d", &tableau[i]);
    }
    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}