#include "../inc/part_of_the_matrix.h"

void mx_print(t_values *num, char *oper) {
    bool xMin = false;
    bool yMin = false;
    bool zMin = false;

    int xsize = mx_strlen(num->ch_x);
    int ysize = mx_strlen(num->ch_y);
    int zsize = mx_strlen(num->ch_z);

    if (!mx_strncmp(oper, "?", 1)) {
        mx_print(num, "+");
        mx_print(num, "-");
        mx_print(num, "*");
        mx_print(num, "/");
    }

    if (num->ch_x[0] == '-') {
        xMin = true;
        num->ch_x++;
        xsize--;
    } 
    if (num->ch_y[0] == '-') {
        yMin = true;
        num->ch_y++;
        ysize--;
    }
    if (num->ch_z[0] == '-') {
        zMin = true;
        num->ch_z++;
        zsize--;
    }
    
    for (int i = 0; i < mx_pow(10, xsize); i++) {
        if (num->x > 0)
            i = num->x; 
        if(!mx_operand_check(num->ch_x, xsize, i)) {
            continue;
        }
        for (int j = 0; j < mx_pow(10, ysize); j++) { 
            if (num->y > 0)
                j = num->y;
            if(!mx_operand_check(num->ch_y, ysize, j)) {
                continue;
            }
            for (int k = 0; k < mx_pow(10, zsize); k++) {
                if (num->z > 0)
                    k = num->z;
                if(!mx_operand_check(num->ch_z, zsize, k))
                    continue;
                if (xMin)
                    i *= -1;
                if (yMin)
                    j *= -1;
                if (zMin)
                    k *= -1;
                if (!mx_strncmp(oper, "+", 1)) {
                    if (i + j == k) 
                        mx_print_res(" + ", i, j, k);
                }
                else if (!mx_strncmp(oper, "-", 1)) {
                    if (i - j == k) 
                        mx_print_res(" - ", i, j, k);
                }
                else if (!mx_strncmp(oper, "*", 1)) {
                    if (i * j == k) 
                        mx_print_res(" * ", i, j, k);
                }
                else if (!mx_strncmp(oper, "/", 1)) {
                    if (j != 0 && i / j == k) 
                        mx_print_res(" / ", i, j, k);
                }
                if (xMin)
                    i *= -1;
                if (yMin)
                    j *= -1;
                if (zMin)
                    k *= -1;
                if (num->z > 0)
                    break;
            }
            if (num->y > 0)
                break;
        }
        if (num->x > 0)
            break;
    }
    if (xMin)
        num->ch_x--;
    if (yMin)
        num->ch_y--;
    if (zMin)
        num->ch_z--;
}

