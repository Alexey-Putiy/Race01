#include "../inc/part_of_the_matrix.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        write(2, "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n", 72);
        exit(-1);
    }

    mx_error_check(argv);
    char *oper = mx_strtrim(argv[2]);
    t_values *numbers = malloc(sizeof(t_values));
    numbers->x = mx_atoi(argv[1]);
    numbers->y = mx_atoi(argv[3]);
    numbers->z = mx_atoi(argv[4]);
    numbers->ch_x = mx_strtrim(argv[1]);
    numbers->ch_y = mx_strtrim(argv[3]);
    numbers->ch_z = mx_strtrim(argv[4]);

    mx_print(numbers, oper);

    free(oper);
    free(numbers);

    return 0;
}

