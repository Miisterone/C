#include <stdio.h>

int compte(int *tab, int longueur_tab, int chiffre_a_compter) {
    int i;
    for (i = 0; i < longueur_tab; i++) {
        printf("%d", tab[i]);
        chiffre_a_compter++;
    }
    printf("\nlong_tab: %d", longueur_tab);
    printf("\nchiffre_a_compter: %d", chiffre_a_compter);
    return 0;
}

int multi(const int *tab_in, int longueur_tab, int *tab_out, int multiplicateur) {
    int i;
    for (i = 0; i < longueur_tab; i++) {
        tab_out[i] = tab_in[i] * multiplicateur ;
    }
    return 0;
}

int calcul(const int *tab_in, int longueur_tab, int *tab_out, int operation, int valeur) {
    int i;
    for (i = 0; i < longueur_tab; i++) {
        switch (operation) {
            case 0 :
                tab_out[i] = tab_in[i] + valeur;
                break;
            case 1 :
                tab_out[i] = tab_in[i] * valeur;
                break;
            case 2 :
                tab_out[i] = tab_in[i] - valeur;
                break;
            case 3 :
                tab_out[i] = tab_in[i] / valeur;
                break;
            default:
                printf("Unknown operation");
        }
    }
    return 0;
}

//int main() {
//    int tab[9] = {1, 2, 3, 4, 1, 2, 3, 4, 5};
//    int tab_in[3] =    {1, 2, 3};
//    int tab_out[3];
//    int tab_check[3] = {3, 4, 5};
//
//    compte(tab,9,0);
//    multi(tab_in, 3, tab_out, 2);
//    calcul(tab_in, 3, tab_out, 0, 2);
//    return 0;
//}

