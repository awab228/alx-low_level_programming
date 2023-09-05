#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
