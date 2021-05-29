/*
 Ce fichier sert a calculer le perimètre d'un polygone convexe:

    (OK)-   Le résultat doit être égal a "28.21"
    (OK)-  Vous devez utiliser des structures
    (OK)-  Votre code doit comporter au moins une fonction qui se charge du calcul
    (OK)-  Cette fonction doit pouvoir calculer le périmètre du n'importe quel polygone convexe
    (OK)-  Les points sont en dur dans le code
*/
#include <stdio.h>
#include <math.h>

struct Cord {
    float x;
    float y;
};

float distance(float x, float y, float x2, float y2) {
    float result;
    result = sqrtf(powf((x2 - x), 2) + powf((y2 - y), 2));
    //printf("Resulat du calcul de distance: %.2f\n",result);
    return result;
}


//int main() {
//    struct Cord cord[] = {
//            {2,  0},
//            {6,  0},
//            {10, 2},
//            {8,  6},
//            {2,  8},
//            {0,  4},
//    };
//    int taille = sizeof(cord) / sizeof(cord[0]);
//    float num = 0;
//
//    for (int i = 0; i <= taille - 1; ++i) {
//        if (i == taille-1) {
//            num += distance(cord[taille - 1].x, cord[taille - 1].y, cord[0].x, cord[0].y);
//            //printf("Perimetre: %.2f \nIndex: %d\n\n", num,i);
//        } else {
//            num += distance(cord[i].x, cord[i].y, cord[i + 1].x, cord[i + 1].y);
//            //printf("Perimetre: %.2f \nIndex: %d\n\n", num,i);
//        }
//    }
//    printf("Le perimetre final est: %.2f\nLa taille de la structure est: %d", num, taille);
//}
