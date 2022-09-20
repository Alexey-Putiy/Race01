#include "../inc/part_of_the_matrix.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            return 1;
        }
    }
    return 0;
}

