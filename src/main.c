#include <stdio.h>
#include "board_print_plain.h"
#include "board.h"

int main() 
{
	char ch[10][10];
	create_bord(ch);
	print_board(ch);
	char s[6];
	scanf("%s", s);
	check_string(ch, s);
	print_board(ch);
    return 0;
}
