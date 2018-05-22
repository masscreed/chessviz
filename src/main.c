#include <stdio.h>
#include <stdlib.h>
char** create_bord(char** ch);
int main() 
{
	char **ch = NULL;
	ch = create_bord(ch);
	
    return 0;
}

char** create_bord(char **p)
{
	p = (char**) malloc(9 * sizeof(char*));
    for (int i = 0; i < 9; i++) {
        p[i] = (char*) malloc(9 * sizeof(char));
    }
	char ko[9][9] = { 
	"bnrqkrnb", 
	"pppppppp",
	"________",
	"________",
	"________",
	"________",
	"PPPPPPPP",
	"BNRQKRNB",	
	};
	for(int i =0; i< 9; i++)
		for(int j =0;j<9;j++)
			p[i][j]=ko[i][j];
	return p;
}
