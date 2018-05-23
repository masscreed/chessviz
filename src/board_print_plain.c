#include <stdio.h>
#include "board_print_plain.h"

void print_board(char ch[][9])
{
	int i, j;
	for (i = 0; i < 8; ++i)
    {
		for (j = 0; j < 8; ++j)
			printf("%c", ch[i][j]);
        printf("\n");
    }
}
