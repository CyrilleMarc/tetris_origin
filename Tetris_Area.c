#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Tetris_Area.h"
#include "Tetris_Area_Functions.c"

#define X 10
#define Y 20

int main()
{

    int latitude = 0;
    int longitude = 0;
    char *answer = malloc(sizeof(char));
    char tetriminos;
    char tab[X][Y];
    int i, j = 0;

    if (0 == init_tetris_area(tab, &latitude, &longitude))
    {
        // printf("Latitude = %d\n", latitude);
        // printf("Longitude = %d\n", longitude);
        printf("Area is ready to play !!\n");
        printf("Go to play : y/n ?\n");
        scanf("%c", answer);
        if ('y' == *answer)
        {
            printf("Let's go!\n");
            printf("\n");
        }
        else
        {
            printf("See you later to play.\n");
            printf("\n");
        }
    }

    if (0 == display_tetriminos_in_tab(tab, &latitude, &longitude, &tetriminos))
    {
        for (i = 0; i < X; i++)
        {
            for (j = 0; j < Y; j++)
            {
                printf("%c", tab[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}