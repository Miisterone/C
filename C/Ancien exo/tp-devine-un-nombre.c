/*
1 - L'ordinateur tire au sort un nombre entre 1 et 100.
2 - Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100.
3 - L'ordinateur compare le nombre que vous avez entré avec le nombre qu'il a tiré au sort.
4 - Il vous dit si le nombre est supérieur ou inférieur à celui que vous avez entré.
5 - Puis l'ordinateur vous redemande le nombre.
6 - Et il vous indique si le nombre mystère est supérieur ou inférieur.
7 - Et ainsi de suite, jusqu'à ce que vous trouviez le nombre mystère.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main() {
//    int NumberUser = 0;
//    const int MAX = 100, MIN = 1;
//
//    srand(time(NULL));
//    int randomNumber = (rand() % (MAX - MIN + 1)) + MIN;
//
//    while (randomNumber != NumberUser) {
//        printf("Entrer un nombre entre 1 a 100:");
//        scanf("%d", &NumberUser);
//
//        if (NumberUser == randomNumber) {
//            printf("You Win!");
//        } else if (NumberUser > randomNumber) {
//            printf("C'est moins\n");
//        } else if (NumberUser < randomNumber) {
//            printf("C'est plus\n");
//        }
//    }
//    return 0;
//}