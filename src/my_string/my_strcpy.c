#include "../../headers/my_string.h"

char* my_strcpy(char* destiny, char* source) {
    int i;
    for(i = 0 ; source[i] != '\0' ; i++) {
        destiny[i] = source[i];
    }
    destiny[i] = '\0';
    return destiny;
}