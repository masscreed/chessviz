#include <stdio.h>
#include "board.h"
#include "board_print_plain.h"

void check_string(char ch[][10], char s[])
{
	if(s[0] >= 'a' && s[0] <= 'h' && s[1] >= '1' && s[1] <= '8' && s[3] >= 'a'
		&& s[3] <= 'h' && s[4] >= '1' && s[4] <= '8')
	{
		if(ch[s[1]-'1'][s[0]-'a'] == 'p')
		{
			if(s[0]-s[3] == 0)
			{
				if(s[4]-s[1] >= 1 && s[4]-s[1] <= 2)
				{
					ch[s[4]-'1'][s[3]-'a'] = 'p';
					ch[s[1]-'1'][s[0]-'a'] = '_';
				}
				else
					printf("Enter correct data\n");
			}
			
		}
		else if(ch[s[1]-'1'][s[0]-'a'] == 'P')
		{
			if(s[0]-s[3] == 0)
			{
				if(s[1]-s[4] >= 1 && s[1]-s[4] <= 2)
				{
					printf("2\n");
					ch[s[4]-'1'][s[3]-'a'] = 'P';
					ch[s[1]-'1'][s[0]-'a'] = '_';
				}
				else
					printf("Enter correct data\n");
			}
			
		}
		
	}
	else
		printf("Enter correct data\n");
	printf("\n\n");
}

void create_bord(char p[][10])
{
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
}
