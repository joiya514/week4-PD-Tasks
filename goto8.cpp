#include <iostream>
using namespace std;
void printS(int speed);
int speed;
main(){
system("cls");
while(true){
cout << "What is speed of Car: ";
cin >> speed;


printS(speed);


}
}
void printS(int speed){
 if(speed <= 100){

  cout << "Prfect! You are going good." << endl;
}
 if(speed > 100){

  cout << "Halt!.... You will be challenged!!!" << endl;
}
 
}