#include "../../headers/my_string.h"

void* my_memcpy(void* destiny, void* source, int n) {

    //Cast the void pointers to char pointers,
    //because character type size is one byte.
    //With this we can iterate over source, byte per byte, and copy to the destiny.
    char* charSource = (char*) source;
    char* charDestiny = (char*) destiny;

    for(int i = 0 ; i < n ; i++) {
        charDestiny[i] = charSource[i];
    }
    return destiny;
}