#include <stdio.h>
#include <string.h>

#include "Tetris_Area.h"

#define X 40
#define Y 60

int main()
{

    char tab[X][Y];
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