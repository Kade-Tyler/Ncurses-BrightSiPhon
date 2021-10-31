#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

int main()
{
	FILE *text_file = fopen("hello.txt", "rb"); 		// This reads in a file as binary
	char character_in_file;
	int held_char, c;
	initscr();						// initializes the screen
	start_color();
	init_pair(0, COLOR_BLACK, COLOR_BLACK);
	init_pair(1, COLOR_WHITE, COLOR_WHITE);
	init_pair(3, COLOR_CYAN, COLOR_CYAN);
	refresh();
	
	bkgd(COLOR_PAIR(3));
	refresh();
	sleep(30);

	while (character_in_file != EOF)
	{		
		character_in_file = fgetc(( FILE *) text_file);
		//printw("%d", character_in_file);
		for (c = 7; c >= 0; c--)
		{
			held_char = character_in_file >> c;
			
			if (held_char & 1) 			// This reads a file that was saved as 
			{
				bkgd(COLOR_PAIR(1));
			}
			else
			{
				bkgd(COLOR_PAIR(0));
			}
			refresh();
			sleep(1);
		}
	}
	bkgd(COLOR_PAIR(3));
	refresh();
	sleep(30);
	endwin();
	int fclose(FILE *text_file);
	return 0;
}

