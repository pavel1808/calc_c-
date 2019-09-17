#include <string>
#include <conio.h>
#include <locale>
#include <ctime>
#include <windows.h>
#include <iostream>
#include <stdio.h>
using namespace std;
void printShit() {
	cout << "Shit" << endl;
} 
void QorR(int *n) {
	int endW=0;
	while(endW==0) {
			endW=1;
			cout <<" Type \"quit\" to quit or \"restart\" to restart" << endl;
			string end;
			cin >> end;
			if(end=="quit") {
				*n=1;
			}else{
				if(end=="restart") {
					endW=1;
				}else{
					 endW=0;
				}
			}
	}
}