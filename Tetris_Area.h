#pragma once

#define X 10
#define Y 20

int init_tetris_area(char tab[X][Y], int *latitude, int *longitude);
int display_tetriminos_in_tab(char tab[X][Y], int *latitude, int *longitude, char *tetriminos);