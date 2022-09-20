#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct s_values{
    int x;
    int y;
    int z;
    char *ch_x;
    char *ch_y;
    char *ch_z;
} t_values;

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(char c);
char *mx_strdup(const char *str);
bool mx_isspace(char c);
//int mx_atoi(const char *str);
long long mx_atoi(const char *str);
char *mx_itoa(long long number);
void mx_printerr(const char *s);
double mx_pow(double n, unsigned int pow);
char *mx_strtrim(const char *str);
int mx_strncmp(const char *s1, const char *s2, int n);

void mx_print_res(char *oper, int i, int j, int k);
void mx_print(t_values *numbers, char *oper);
void mx_calculate(char *operand1, char *operation, char *operand2, char *result);
void mx_error_check(char *argv[]); 
int mx_operand_check (char *operand, int size_o, int i);
#endif

