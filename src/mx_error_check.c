#include "../inc/part_of_the_matrix.h"

void print_e(char* error, char* argv) {
    write(2, error, mx_strlen(error));
    write(2, argv, mx_strlen(argv));
    write(2, "\n", 1);
    exit(-1);
}

void mx_error_check(char *argv[]) {
    char *o1 = mx_strtrim(argv[1]);
    char *op = mx_strtrim(argv[2]);
    char *o2 = mx_strtrim(argv[3]);
    char *res = mx_strtrim(argv[4]);

    int o1_size = mx_strlen(o1);
    int op_size = mx_strlen(op);
    int o2_size = mx_strlen(o2);
    int res_size = mx_strlen(res);

    if (op_size != 1) print_e("Invalid operation: ", argv[2]);
    if (o1_size <= 0) print_e("Invalid operand: ", argv[1]);
    if (o2_size <= 0) print_e("Invalid operand: ", argv[3]);
    if (res_size <= 0) print_e("Invalid result: ", argv[4]);

    for (int i = 0; i < o1_size; i++) {
        if (i == 0 && o1[i] == '-') continue;

        if (o1[i] != '?' && !mx_isdigit(o1[i]))
            print_e("Invalid operand: ", o1);
    }

    if (*op != '?' && *op != '+' && *op != '-' 
        && *op != '*' && *op != '/') {
        print_e("Invalid operation: ", op);
    }

    for (int i = 0; i < o2_size; i++) {
        if (i == 0 && o2[i] == '-') continue;

        if (o2[i] != '?' && !mx_isdigit(o2[i]))
            print_e("Invalid operand: ", o2);
    }

    for (int i = 0; i < res_size; i++) {
        if (i == 0 && res[i] == '-') continue;

        if (res[i] != '?' && !mx_isdigit(res[i]))
            print_e("Invalid result: ", res);
    }
}

