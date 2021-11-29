#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;
int total1;
int total2;
int X,Y;
COORD coord={X=0,Y=0};
void gotoxy(int x,int y){
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void kocok_1(){
	int r[3];
	srand(time(0));
	int x;

	for(int i = 0 ; i < 3 ; i++){
	x=(rand()%8);
	r[i]=x;

	cout<<x<<endl;

	
}
cout<<"\n";
total1=r[0]+r[1]+r[2];
cout <<"total: "<<total1;
cout<<"\n";

}
void kocok_2(){
	int p[3];
	srand(time(0));
	int q;

	for(int i = 0 ; i < 3 ; i++){
	q=(rand()%8);
	p[i]=q;

	gotoxy(50,11+i);	cout<<q<<endl;
	
	
}
cout<<"\n";
total2=p[0]+p[1]+p[2];
gotoxy(50,15);	cout <<"total: "<<total2;
cout<<"\n";

}
void loading(){
char huruf_k[]= {"loading..."};

for(int a=1;a<=7;a++){

gotoxy(55,11); cout<<"BLACKJACK"<<endl;
gotoxy(57,12); cout<<"GAMES"<<endl;
huruf_k[a-1]=toupper(huruf_k[a-1]);
system("Color 70");
	
gotoxy(55,23);
printf(huruf_k);

huruf_k[a-1]=tolower(huruf_k[a-1]);
gotoxy(0,3);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,4);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,5);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,6);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,7);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,8);	cout<<"======================================================================================================================="<<endl;
cout<<"\n";
cout<<"\n";
cout<<"\n";	
cout<<"\n";
gotoxy(0,26);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,27);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,28);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,29);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,30);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,31);	cout<<"======================================================================================================================="<<endl;
Sleep(100);
system("cls");

}
}
void pembatas(){
gotoxy(0,3);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,4);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,5);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,6);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,7);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,8);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,26);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,27);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,28);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,29);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,30);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,31);	cout<<"======================================================================================================================="<<endl;
}
void keluar(){
	exit(0);
}

int main(){
	string jwb;
	char choice ;
	int select;
	int umur=18;
	int jawaban;
	loading();
	pembatas();
	menu:
	gotoxy(6,10); cout<<"PLEASE ENTER YOUR AGE : ";
	cin>>jawaban;
	if (jawaban<umur){
		gotoxy(6,12); cout<<"SORRY YOU'RE TOO YOUNG TO PLAY THIS GAME, PLEASE COME BACK WHEN YOU'RE OLD ENOUGH..";
		cout<<"\n";
		exit(0);
	} else if (jawaban>umur){
	 system("cls");
	pembatas();
	gotoxy(47,11);	cout<<"welcome to blackjack game!"<<endl;
	cout<<"\n";
	gotoxy(46,23);	cout<<"press any button to continue";
	getch();
	system("cls");
	
	//75 panah kiri 77 panah kanan
	pembatas();
	awal:
	system("cls");
	pembatas();
	gotoxy(35,18); cout<<"PLAY";
	gotoxy(74,18); cout<<"LEADERBOARD";
	gotoxy(51,14); cout<<"press y to select";
	for(int s=0; ; ){
		choice=getch();
		if(choice == 75 ){
			
			gotoxy(40,18); cout<<"<=";
			gotoxy(35,18); cout<<"PLAY";
			gotoxy(86,18); cout<<"  ";
			gotoxy(74,18); cout<<"LEADERBOARD";
			select = 1;
		}
		
		if(choice == 77){
			gotoxy(40,18); cout<<"  ";
			gotoxy(35,18); cout<<"PLAY";
			gotoxy(86,18); cout<<"<=";
			gotoxy(74,18); cout<<"LEADERBOARD";
			select = 2;
		}
		
		if(choice == 'y'){
			
			if(select == 1){
				goto game;
			}
			if(select == 2){
				
			}
		}

	}

	}
	game:
	system("cls");
	pembatas();
	gotoxy(0,10);	cout<<"player 1 press any button to spin the roulette"<<endl;
	getch();
	kocok_1();

	cout<<"\n";

	gotoxy(50,10);	cout<<"player 2 press any button to spin the roulette"<<endl;
	getch();
	kocok_2();
	cout<<"\n";
if (total1<total2){
	cout<<"PLAYER 2 WIN!"<<endl;
	cout<<"\n";
	cout<<"PLAY AGAIN?";
	gotoxy (15,19); cout<<"yes";
	gotoxy (30,19); cout<<"no";
	gotoxy (45,19); cout<<"press y to select";
	for(int s=0; ; ){
		choice=getch();
		if(choice == 75 ){
			
			gotoxy(19,19); cout<<"<=";
			gotoxy(15,19); cout<<"yes";
			gotoxy(33,19); cout<<"  ";
			gotoxy(30,19); cout<<"no";
			select = 1;
		}
		
		if(choice == 77){
			gotoxy(19,19); cout<<"  ";
			gotoxy(15,19); cout<<"yes";
			gotoxy(33,19); cout<<"<=";
			gotoxy(30,19); cout<<"no";
			select = 2;
		}
		
		if(choice == 'y'){
			
			if(select == 1){
				goto awal;
			}
			if(select == 2){
				keluar();
			}
		}

	}

} else if (total1>total2){
	cout<<"PLAYER 1 WIN!"<<endl;
	cout<<"\n";
	cout<<"PLAY AGAIN?";
	gotoxy (15,19); cout<<"yes";
	gotoxy (30,19); cout<<"no";
	gotoxy (45,19); cout<<"press y to select";
	for(int s=0; ; ){
		choice=getch();
		if(choice == 75 ){
			
			gotoxy(19,19); cout<<"<=";
			gotoxy(15,19); cout<<"yes";
			gotoxy(33,19); cout<<"  ";
			gotoxy(30,19); cout<<"no";
			select = 1;
		}
		
		if(choice == 77){
			gotoxy(19,19); cout<<"  ";
			gotoxy(15,19); cout<<"yes";
			gotoxy(33,19); cout<<"<=";
			gotoxy(30,19); cout<<"no";
			select = 2;
		}
		
		if(choice == 'y'){
			
			if(select == 1){
				goto awal;
			}
			if(select == 2){
				keluar();
			}
		}

	}
	
} else if (total1==total2){
	cout<<"DRAW!"<<endl;
	cout<<"\n";
	cout<<"PLAY AGAIN?";
	gotoxy (15,19); cout<<"yes";
	gotoxy (30,19); cout<<"no";
	gotoxy (45,19); cout<<"press y to select";
	for(int s=0; ; ){
		choice=getch();
		if(choice == 75 ){
			
			gotoxy(19,19); cout<<"<=";
			gotoxy(15,19); cout<<"yes";
			gotoxy(33,19); cout<<"  ";
			gotoxy(30,19); cout<<"no";
			select = 1;
		}
		
		if(choice == 77){
			gotoxy(19,19); cout<<"  ";
			gotoxy(15,19); cout<<"yes";
			gotoxy(33,19); cout<<"<=";
			gotoxy(30,19); cout<<"no";
			select = 2;
		}
		
		if(choice == 'y'){
			
			if(select == 1){
				goto awal;
			}
			if(select == 2){
				keluar();
			}
		}

	}
	
}

}
