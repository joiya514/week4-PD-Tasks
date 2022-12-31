#include <iostream>
using namespace std;
void test(int number1, int number2);
int number1;
int number2;

main(){
while(true){
cout << "Enter 1st number: ";
cin >> number1;
cout << "Enter 2nd number: ";
cin >> number2;
test(number1, number2);
}
}
void test(int number1, int number2){
if(number1 == number2){
 cout << "True" << endl;

}
if(number1 != number2){
cout << "False" << endl;
}
}