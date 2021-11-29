#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;
string player1="PLAYER 1";
string player2="PLAYER 2";
string email_baru;
string pass_baru;
string email="akuanaksehat@gmail.com";
string pass="tubuhkukuat";
int total1;
int total2;
int menang1;
int menang2;
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
	q=(rand()%7+1);
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
gotoxy(67,25);	cout<<"DISCLAIMER : GAMBLING IS A SIN, DO AT YOUR OWN RISK!";
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
void ranking(){
	if (total1<total2){
		menang2++;
	} else if (total1>total2){
		menang1++;
	}
	gotoxy(40,10); cout<<"=======================================";
	gotoxy(40,11); cout<<"|| RANK ||       PLAYER       || WIN ||";
	gotoxy(40,12); cout<<"=======================================";
	gotoxy(40,13); cout<<"||  1.  ||                    ||     ||";
	gotoxy(40,14); cout<<"||  2.  ||                    ||     ||";
	gotoxy(40,15); cout<<"=======================================";

	
	if (total1<total2){
		gotoxy(51,13); cout<<player2;
		gotoxy(51,14); cout<<player1;
		
	} else if (total1>total2){
		gotoxy(51,13); cout<<player1;
		gotoxy(51,14); cout<<player2;
		
}
	if (menang1<menang2){
		gotoxy(74,13); cout<<menang2;
		gotoxy(74,14); cout<<menang1;
		
	} else if (menang1>menang2){
		gotoxy(74,13); cout<<menang1;
		gotoxy(74,14); cout<<menang2;

	} else if (menang1==menang2){
		gotoxy(74,13); cout<<menang1;
		gotoxy(74,14); cout<<menang2;
		
	}
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
	gotoxy(35,18); cout<<"SIGN IN";
	gotoxy(76,18); cout<<"SIGN UP";
	gotoxy(51,14); cout<<"press y to select";
for(int s=0; ; ){
		choice=getch();
		if(choice == 75 ){
			
			gotoxy(43,18); cout<<"<=";
			gotoxy(35,18); cout<<"SIGN IN";
			gotoxy(84,18); cout<<"  ";
			gotoxy(76,18); cout<<"SIGN UP";
			select = 1;
		}
		
		if(choice == 77){
			gotoxy(43,18); cout<<"  ";
			gotoxy(35,18); cout<<"SIGN IN";
			gotoxy(84,18); cout<<"<=";
			gotoxy(76,18); cout<<"SIGN UP";
			select = 2;
		}
		
		if(choice == 'y'){
		
			if(select == 1){
					system("cls");
			pembatas();
			balik:
			system("cls");
			pembatas();
			gotoxy(6,10); cout<<"EMAIL : ";
			gotoxy(14,10); cin>>email;
			if (email=="akuanaksehat@gmail.com"){
				goto password;
			} else{
				gotoxy(6,11); cout<<"SORRY EMAIL IS NOT REGISTERED";
				getch();
				goto balik;
			}
			password:
			gotoxy(6,12); cout<<"PASSWORD : ";
			gotoxy(17,12); cin>>pass;
			if (pass=="tubuhkukuat"){
				system("cls");
				pembatas();
				gotoxy (38,14); cout<<"LOG IN SUCCESSFUL.. PLEASE WAIT FOR A WHILE";
				Sleep(3000);
				goto awal;
			} else{
				gotoxy(6,13); cout<<"WRONG PASSOWRD!";
				getch();
				system("cls");
				goto balik;
			}
			}
			if(select == 2){
				system("cls");
				pembatas();
				gotoxy(6,10); cout<<"EMAIL : ";
				gotoxy(14,10); cin>>email_baru;
				gotoxy(6,12); cout<<"PASSWORD : ";
				gotoxy(17,12); cin>>pass_baru;
				
				system("cls");
				pembatas();
				gotoxy(43,14); cout<<"REGISTRATION HAS BEEN SUCCESSFUL!";
				gotoxy (52,16); cout<<"ENJOY THE GAME!";
				gotoxy(46,23);	cout<<"press any button to continue";
				getch();
				
				goto awal;
			}
		}

	}
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
				system("cls");
				pembatas();
				ranking();
				gotoxy(47,23);	cout<<"press any button to back.";
				getch();
				goto awal;
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
