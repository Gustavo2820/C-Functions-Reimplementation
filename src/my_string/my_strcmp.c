#include "../../headers/my_string.h"

int my_strcmp(char* str1, char* str2) {
    int i = 0;
    // Iterates over the two strings.
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            // Returns 1 if str1 is greater than str2, -1 otherwise.
            return (str1[i] > str2[i]) ? 1 : -1;
        }
        i++;
    }
    // If we reach here, it means all characters up to now are equal.
    // We need to check if one of the strings ended.
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // The strings are equal.
    } else if (str1[i] == '\0') {
        return -1; // str1 is shorter than str2.
    } else {
        return 1; // str1 is longer than str2.
    }
}
