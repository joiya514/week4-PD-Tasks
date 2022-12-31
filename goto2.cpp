#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printM();
void player();
main(){

   system("cls");
   printM();
   
   player();
}

void printM(){
cout << "############################" << endl;
cout << "#                          #" << endl;
cout << "#                          #" << endl;
cout << "#                          #" << endl;
cout << "#                          #" << endl;
cout << "#                          #" << endl;
cout << "#                          #" << endl;
cout << "#                          #" << endl;
cout << "############################" << endl;

}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void player(){

gotoxy(14, 4);
cout << "P";

}
