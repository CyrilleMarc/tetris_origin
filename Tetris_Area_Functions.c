#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int init_tetris_area(char tab[X][Y], int *latitude, int *longitude)
{

    *latitude = X;
    *longitude = Y;
    char star = '*';
    char space = ' ';
    int i = 0;
    int j = 0;

    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            if ((j == 0) || (j == (Y - 1)) && (i != (X - 1)))
            {
                tab[i][j] = star;
            }
            else if (i == (X - 1))
            {
                tab[i][j] = star;
            }
            else
            {
                tab[i][j] = space;
            }
        }
    }

    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int display_tetriminos_in_tab(char tab[X][Y], int *latitude, int *longitude, char *tetriminos)
{
    tab[X - X][10] = 'O';

    return 0;
}