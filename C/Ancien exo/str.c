#include <stdio.h>

int strlen(const char *text) {
    int count = 0;

    while (text[count] != 0) {
        count++;
    }
    return count;
}

void strcopy(char *dest, const char *src) {
    for (int i = 0; i <= strlen(src); i++) {
        dest[i] = src[i];
    }
}

void strcat(const char *chaine1, const char *chaine2, char *dest) {
    strcopy(dest, chaine1);
    strcopy(dest + strlen(chaine1), chaine2);
}

int strcomp(const char *chaine1, const char *chaine2) {
    if (strlen(chaine1) != strlen(chaine2)) {
        return 0;
    }

    for (int i = 0; i < strlen(chaine1); i++) {
        if (chaine1[i] != chaine2[i]) {
            return 0;
        }
    }
    return 1;
}

int strchar(const char *str, const char toFind) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == toFind) {
            return i;
        }
    }
    return -1;
}

int Strstr(const char* chain, const char* chainToSearch){
    for (int i = 0; i < strlen(chain); ++i) {
        if (chain[i] == chainToSearch[0]){
            for (int j = 0; j < strlen(chainToSearch); ++j) {
                if (chain[i + j] != chainToSearch[j]) {
                    break;
                }
                if (j == strlen(chainToSearch) - 1) {
                    return i;
                }
            }
        }
    }
    return -1;
}

//int main() {
//    //strcat
//    char chaine1[] = "azert";
//    char chaine2[] = "yuiop";
//    char dest2[100] = "";
//
//    //strlen et stecopy
//    char src[] = "TestAA";
//    char dest[100] = "";
//
//    //strcat
//
//    //printf("TestAA must be equals to 6: %d\n", strlen("TestAA"));
//    //strcopy(dest, src);
//    //printf("%s est la source, %s est la destination\n", src, dest);
//    //strcat(chaine1, chaine2, dest2);
//    //printf("strA = %s, strB = %s, dest2 = %s\n", strA, strB, dest2);
//
//    //strcomp
//    //printf("Les chaines ne devraient pas etre egales: %d\n", strcomp(chaine1, chaine2));
//    //printf("Les chaines devraient etre egales: %d\n", strcomp(chaine1, chaine1));
//
//
//    //strchr
//    //printf("Le caractere se trouve dans \"azert\" a l'indice: %d\n", strchar(chaine1, 'r'));
//
//    //strstr
//    printf("%d", Strstr("abcd", "abc"));
//
//    return 0;
//}

