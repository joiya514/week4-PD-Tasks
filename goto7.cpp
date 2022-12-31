#include <iostream>
using namespace std;
void ticket(string country, int price);
string country;
int price;
main(){
while(true){
cout << "Enter country name: ";
cin >> country;
cout << "Enter price of ticket in dollars: ";
cin >> price;

 ticket(country, price);
}
}
void ticket(string country, int ticket){
if(country == "Pakistan"){
cout << "Price after discount is: " << price - (0.05 * price) << endl;

}
if(country == "Ireland"){
cout << "Price after discount is: " << price - (0.1 * price) << endl;
}
if(country == "India"){
cout << "Price after discount is: " << price - (0.2 * price) << endl;
}
if(country == "England"){
cout << "Price after discount is: " << price - (0.3 * price) << endl;
}
if(country == "Canada"){
cout << "Price after discount is: " << price - (0.45 * price) << endl;
}
}