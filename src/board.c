#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "board_print_plain.h"

void check_string(char ch[][9], char s[])
{
	char buf;
	printf("1\n");
	if(s[0] >= 'a' && s[0] <= 'h' && s[1] >= '1' && s[1] <= '8' && s[3] >= 'a'
		&& s[3] <= 'h' && s[4] >= '1' && s[4] <= '8')
	{
		printf("4\n");
		if(ch[s[1]-'1'][s[0]-'a'] == 'p')
		{
			printf("7\n");
			if(s[0]-s[3] == 0)
			{
				printf("6\n");
				if(s[4]-s[1] >= 1 && s[4]-s[1] <= 2)
				{
					printf("2\n");
					ch[s[4]-'1'][s[3]-'a'] = 'p';
					ch[s[1]-'1'][s[0]-'a'] = '_';
				}
				else
					printf("Enter correct data\n");
			}
			
		}
		else if(ch[s[1]-'1'][s[0]-'a'] == 'P')
		{
			printf("5\n");
			if(s[0]-s[3] == 0)
			{
				printf("6\n");
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
	printf("3\n");
}

void create_bord(char p[][9])
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
