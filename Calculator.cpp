#include "include.hpp"
int Sumbvols=0;
int numbOfnumb[100];
string sumb[14][4]= {
					{"###","# #","# #","###"},
					{" # "," # "," # "," # "},
					{"## ","  #"," # ","###"},
					{"###","  /","  \\","###"},
					{"# #","#_#","  #","  #"},
					{"###"," \\ ","  #","## "},
					{"###","#_ ","# #","###"},
					{"###","  #","  #","  #"},
					{"###","#_#","# #","###"},
					{"###","# #","###","__#"},
					{"   ","_|_"," | ","   "},
					{"   ","___","   ","   "},
					{"  /"," / ","/  ","   "},
					{"   ","\\|/","/|\\","   "}
					};
void draw() {
	system("cls");
	for(int a=0;a<4;a++) {
		for(int i=0;i<Sumbvols;i++) {
			cout << sumb[numbOfnumb[i]][a] << "  ";
		}
		cout << endl;
	}
}
void calc() {

}
int lev=0;
int main() {
	while(true) {
		char d='h';
		if(_kbhit()) {
			d=_getch();
		}
		char b;
		if(d=='0'||d=='1'||d=='2'||d=='3'||d=='4'||d=='5'||d=='6'||d=='7'||d=='8'||
			d=='9'||d=='+'||d=='-'||d=='/'||d=='*'||d==127||d=='=') {
			b=d;
			lev=1;
			if(d==127 && Sumbvols>0)
				Sumbvols -=1;
			if(d!=127)
				Sumbvols +=1;
		}
		if(lev==1) {
			switch(b) {
			case '0':
			numbOfnumb[Sumbvols-1]=0;
			break;
			case '1':
			numbOfnumb[Sumbvols-1]=1;
			break;
			case '2':
			numbOfnumb[Sumbvols-1]=2;
			break;
			case '3':
			numbOfnumb[Sumbvols-1]=3;
			break;
			case '4':
			numbOfnumb[Sumbvols-1]=4;
			break;
			case '5':
			numbOfnumb[Sumbvols-1]=5;
			break;
			case '6':
			numbOfnumb[Sumbvols-1]=6;
			break;
			case '7':
			numbOfnumb[Sumbvols-1]=7;
			break;
			case '8':
			numbOfnumb[Sumbvols-1]=8;
			break;
			case '9':
			numbOfnumb[Sumbvols-1]=9;
			break;
			case '+':
			numbOfnumb[Sumbvols-1]=10;
			break;
			case '-':
			numbOfnumb[Sumbvols-1]=11;
			break;
			case '/':
			numbOfnumb[Sumbvols-1]=12;
			break;
			case '*':
			numbOfnumb[Sumbvols-1]=13;
			break;
			case 127:
			break;
			};
		}
		draw();
		calc();
		lev=0;
	}
	return 0;
}