#include <ncurses.h>
using namespace std;
void box(){
	WINDOW * win = newwin(25,50,1,1);
	refresh();
	box(win,0,0);
	wrefresh(win);
}
int main(){

initscr();
	box();
	mvprintw(3,21,"BLACKJACK");
	mvprintw(20,18,"PRESS ANY BUTTON");

	getch();
	endwin();
}
