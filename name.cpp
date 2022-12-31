#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);

main(){
  system("cls");
  gotoxy(55,20);
cout << " #######   ###    ####  ####  ####  ####  " << endl;

  gotoxy(55,21);
cout << "    #     #   #   #     #     #     #     " << endl;
    gotoxy(55,22);
cout << "    #     #   #   ####  ####  ####  ####  " << endl;
    gotoxy(55,23);
cout << "    #     #   #      #  #     #     #     " << endl;
   gotoxy(55,24);
cout << "    #      ###    ####  ####  ####  #     " << endl;
  
  
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
