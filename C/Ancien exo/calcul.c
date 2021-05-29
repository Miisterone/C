#include <stdio.h>
#include <math.h>

float rectangle(int rep2) {
    float l = 0;
    float L = 0;
    printf("/================\n");
    printf("| Quel est la longueur ?");
    scanf("%f", &L);
    printf("| Quel est la largueur ?");
    scanf("%f", &l);
    if (rep2 == 1) {
        float cal = l * L;
        printf("| L'aire est: %f\n", cal);
    } else {
        float cal = l * 2 + L * 2;
        printf("| Le perimetre est: %f\n", cal);
    }
    printf("\\================\n");
    return 0;
}

float cercle(int rep2) {
    float pi = 3.14;
    float r = 0;
    printf("/================\n");
    printf("| Quel est le rayon ?");
    scanf("%f", &r);
    if (rep2 == 1) {
        float cal = pi * pow(r, 2);
        printf("| L'aire est: %f\n", cal);
    } else {
        float cal = 2 * pi * r;
        printf("| Le perimetre est: %f\n", cal);
    }
    printf("\\================\n");
    return 0;

}

float carre(int rep2) {
    float c = 0;
    printf("/================\n");
    printf("| Quel est le cote ?");
    scanf("%f", &c);
    if (rep2 == 1) {
        float cal = c * c;
        printf("| L'aire est: %f\n", cal);
    } else {
        float cal = c * 4;
        printf("| Le perimetre est: %f\n", cal);
    }
    printf("\\================\n");
    return 0;

}

//int main() {
//    int rep = 0;
//    int rep2 = 0;
//    while (rep == 0 && rep2 == 0){
//        printf("/================\n");
//        printf("| 1 - Rectangle\n");
//        printf("| 2 - Cercle\n");
//        printf("| 3 - Carre\n");
//        printf("| Que voulez-vous calculer ?");
//        scanf("%d", &rep);
//        printf("|================\n");
//        printf("| 1 - Aire \n");
//        printf("| 2 - perimetre \n");
//        printf("| Que voulez-vous calculer ?");
//        scanf("%d", &rep2);
//    }
//
//    if (rep == 1) {
//        printf("\\================\n");
//        printf("\n");
//        rectangle(rep2);
//    } else if (rep == 2) {
//        printf("\\================\n");
//        printf("\n");
//        cercle(rep2);
//    } else if (rep == 3) {
//        printf("\\================\n");
//        printf("\n");
//        carre(rep2);
//    }
//    return 0;
//}
