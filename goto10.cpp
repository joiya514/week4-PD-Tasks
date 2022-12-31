#include <iostream>
using namespace std;
void sleep();
int holidays;
int working;
int mint;
int hour;
int mint1;
int hour1;
int mint2;
int hour2;


main(){
system("cls");
while(true){
cout << "How many holidays in year: ";
cin >> holidays;
working = 365 - holidays;
mint = (63 * working) + (127 * holidays);
hour = mint / 60;
mint1 = 30000 - mint;
hour1 = mint1 / 60;
mint2 = mint - 30000;
hour2 = mint2 / 60;

sleep();
}
}
 void sleep(){
  if(mint <= 30000){
    cout << "Tom sleeps well." << mint1 << " mints less for play" << endl;
    cout << "In other words: " << hour1 << " hours " << mint1 - (hour1 * 60) << " mints less for play." << endl;
}
  if(mint > 30000){
    cout << "Tom can not sleep well." << ( mint - 30000) << " mints more to play" << endl;
    cout <<"In other words: " << hour2 << " hours " << mint2 - (hour2 * 60) << " mints more to play." << endl;
}

  }