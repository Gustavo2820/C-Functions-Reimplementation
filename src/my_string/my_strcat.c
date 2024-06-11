#include "../../headers/my_string.h"

char* my_strcat(char* destiny, char* source) {
    //This pointer points to the first character of the string destiny.
    char* p = destiny;
    //Iterate over the string, character by character, until encounter the null character.
    while(*p != '\0') {
        p++;
    }
    //Iterate over source string, character by character, until encounter the null character.
    while(*source != '\0') {
        //Dereference of p is the destiny string. Dereference of source is the source string.
        //Adds the source characters (one by one) in the final of the destiny string.
        *p++ = *source++;
    }
    *p = '\0'; //Sets the null character in the end of the concatenated string.
    return destiny;
}