#include <stdio.h>

int main() 
{
    int i, j;
    char ch[8][8] = {
	"bnrqkrnb",
	"pppppppp",
	"________",
	"________",
	"________",
	"________",
	"PPPPPPPP",
	"BNRQKRNB",
    };
    
    for (i = 0; i < 8; ++i)
    {
	for (j = 0; j < 8; ++j)
		printf("%c", ch[i][j]);
        printf("\n");
    }
    
    return 0;
}
