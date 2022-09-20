#include "../inc/part_of_the_matrix.h"

bool mx_isspace(char c);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strncpy(char*, const char*, int);
void mx_strdel(char **str);

char *mx_strtrim(const char *str) {
    if (str == NULL) 
        return NULL;

    int begin = 0;
    while (*str && mx_isspace(*str)) {
        str++;
        begin++;
    }
    str = str - begin;

    int end = mx_strlen(str) - 1;
    while (mx_isspace(str[end])) 
        end--;

    char *res = mx_strnew(end + 1 - begin);
    for (int i = 0; i < end + 1 - begin; i++) {
        res[i] = str[i + begin];
    }
    return res;
}

