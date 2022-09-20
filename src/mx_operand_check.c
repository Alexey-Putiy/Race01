#include "../inc/part_of_the_matrix.h"

int mx_operand_check (char *operand, int size_o, int i) {
    char *str = mx_itoa(i);
    int str_size = mx_strlen(str);
    for (int j = 0; j < size_o - str_size; j++)
        if (mx_isdigit(operand[j]) && operand[j] != '0')
            return 0;
    for (int j = size_o - str_size, temp = 0; j < size_o; j++, temp++)
        if (operand[j] != '?' && operand[j] != str[temp])
                return 0;
    free(str);
    str = NULL; 
    return 1;
}

