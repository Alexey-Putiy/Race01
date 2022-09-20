#include "../inc/part_of_the_matrix.h"

void mx_print_res(char *oper, int i, int j, int k) {
    mx_printint(i);
    mx_printstr(oper);
    mx_printint(j);
    mx_printstr(" = ");
    mx_printint(k);
    mx_printchar('\n');
}

