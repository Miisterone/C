#include <stdio.h>
#include <stdlib.h>

struct Contact {
    char *firstname;
    char *lastname;
    int age;
};

FILE *file = NULL;
struct Contact contact;

char check_file() {
    if (file == NULL) {
        printf("/===========================\n");
        printf("| Unable to open the file\n");
        printf("\\===========================");
    } else{
        printf("/===========================\n");
        printf("| The file has been created\n");
        printf("\\===========================\n");
    }
    return 0;
}

char ask_firstname(){
    char *firstname = (char *) malloc(100 * sizeof(char));

    printf("/===========================\n");
    printf("| Enter a first name:");
    scanf("%s", firstname);
    contact.firstname = firstname;
    printf("| \"%s\" has been saved\n", contact.firstname);
    printf("\\===========================\n");
    return 0;
}

char ask_lastname(){
    char *lastname = (char *) malloc(100 * sizeof(char));

    printf("/===========================\n");
    printf("| Enter a last name:");
    scanf("%s", lastname);
    contact.lastname = lastname;
    printf("| \"%s\" has been saved\n", contact.lastname);
    printf("\\===========================\n");
    return 0;
}

int ask_age(){
    printf("/===========================\n");
    printf("| Enter an age:");
    scanf("%d", &contact.age);
    printf("| \"%d\" has been saved\n", contact.age);
    printf("\\===========================\n");
    return 0;
}

int main() {
    int *age = (int *) malloc(100 * sizeof(int));

    file = fopen("contact.txt", "a");
    check_file();
    ask_firstname();
    ask_lastname();
    ask_age();

    fprintf(file, "firstname:%s | lastname:%s | age:%d\n", contact.firstname, contact.lastname, contact.age);
    fclose(file);

    free(contact.firstname);
    free(contact.lastname);
    free(age);
    return 0;
}
