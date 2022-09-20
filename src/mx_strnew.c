#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = (char *)malloc(size + 1);
    if(size < 1)
        return NULL;
    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
    return str;
}
