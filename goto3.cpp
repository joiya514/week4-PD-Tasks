#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printM();
void player(int x, int y);
main(){
  
   system("cls");
   printM();
   int x = 4;
   int y = 4;
   while(true){
   player(x, y);
  if(x < 25){
   x = x + 1;
    }
  if (x == 25){
   gotoxy(x-1, y);
   cout << " ";
   x = 4;
   
  }
 }

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

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void player(int x, int y){
gotoxy(x-1, y);
cout << " ";
gotoxy(x, y);
cout << "P";
Sleep(200);

}
