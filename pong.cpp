#include <iostream>
#include <ncurses.h>
#include <cstdlib>

int window_width = 93;
int window_height = 21;

int setupwindow()
{
	WINDOW *win = newwin(window_height,window_width,1,10);
	refresh();
	box(win, 0, 0);
	mvwprintw(win,10,10,"|                                                                                                              |                                                                                                              |");
	wrefresh(win);
	return 0;
}

int main()
{
	initscr();
	setupwindow();
	getch();
	endwin();
	return 0;
}
