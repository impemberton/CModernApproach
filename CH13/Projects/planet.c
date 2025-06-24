/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc ; i++) {
        char lower_arg[20];
        strcpy(lower_arg, argv[i]);
        for (char *p = lower_arg; *p; p++)
            *p = tolower(*p);
        for (j = 0; j < NUM_PLANETS; j++) {
            char lower_planet[20];
            strcpy(lower_planet, planets[j]);
            for (char *p = lower_planet; *p; p++)
                *p = tolower(*p);
            if (strcmp(lower_arg, lower_planet) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
