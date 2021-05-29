#include <stdio.h>
#define TAILLE_MAX 1000

char check(FILE *file) {
    if (file != NULL) {
        printf("/=========================\n");
        printf("| The file was not found\n");
        printf("\\=========================");
    } else{
        printf("/===========================\n");
        printf("| The file has been found\n");
        printf("\\===========================\n");
    }
    return 0;
}

int main() {
    FILE *file = NULL;
    char result[TAILLE_MAX] = "";
    int count = 0;

    check(file);
    file = fopen("contact.txt", "r");
    if (file != NULL) {
        printf("/===================================================\n");
        printf("| Here is the contact list:\n");
        while (fgets(result, TAILLE_MAX, file) != NULL)
        {
            printf("| %s", result);
            count++;
        }
        printf("\\===================================================\n");
        printf("/=========================\n");
        printf("| There are %d contacts\n", count);
        printf("\\=========================\n");
        fclose(file);
    }
    return 0;
}
