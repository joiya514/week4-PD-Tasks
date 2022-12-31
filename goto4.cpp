#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printM();
void player(int x, int y);
      
main(){

   system("cls");
   printM();
 int x = 7;
 int y = 2;

while(true){
  player(x, y);
   if(y < 13){
  y = y + 1;
} 
 
 if(y == 13){
  gotoxy(x, y - 1);
  cout << " ";
 y = 2;
}
 
  
}
}
void printM(){
cout << "########################################" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "#                                      #" << endl;
cout << "########################################" << endl;


}
 void gotoxy(int x, int y){
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void player(int x, int y){
gotoxy(x, y-1);
cout << " ";
gotoxy(x, y);
 cout << "P";
 Sleep(200);
}
