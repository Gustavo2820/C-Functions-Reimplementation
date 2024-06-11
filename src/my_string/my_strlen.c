#include "../../headers/my_string.h"

int my_strlen(char* string) {
    int length = 0;
    while(string[length] != '\0') {
        length++;
    }
    return length;
}