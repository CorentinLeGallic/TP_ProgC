#include <stdio.h>

#define STUDENTS_COUNT 5

int main() {
    char names[STUDENTS_COUNT][50] = { "Tom", "Taïlan", "Jean", "Dan", "Marie" };
    char surnames[STUDENTS_COUNT][50] = { "Dupuy", "Pierre", "Dupond", "Martin", "Poirier" };
    char adresses[STUDENTS_COUNT][100] = {
        "14 rue du Bourg Nouveau",
        "3 rue de la Madeleine",
        "10 rue Saint-Michel",
        "27bis avenue des Lilas",
        "7 boulevard du Canal"
    };

    float gradesC[STUDENTS_COUNT] = { 19.5, 10.0, 4.5, 17.0, 18.5 };
    float gradesOS[STUDENTS_COUNT] = { 10.0, 19.5, 17, 18.5, 4.5 };

    for(int i = 0; i < STUDENTS_COUNT; i++){
        printf("%s %s - %s - %f & %2f\n", names[i], surnames[i], adresses[i], gradesC[i], gradesOS[i]);
    }

    return 0;
}


