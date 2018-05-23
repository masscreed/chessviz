#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.h"
#include "board.h"

int main() 
{
	char ch[9][9];
	create_bord(ch);
	print_board(ch);
	char s[5];
	scanf("%s", s);
	check_string(ch, s);
	printf("10\n");
	print_board(ch);
	
    return 0;
}
