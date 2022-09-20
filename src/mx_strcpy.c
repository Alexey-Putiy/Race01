#include <stdio.h>

char* mx_strcpy(char* dst, const char* src) {
    if (dst == NULL)
        return NULL;

    char* temp = dst;

    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    return temp;
}

