#include <iostream>
using namespace std;
void enter(string word);
string word;
main(){
while(true){
cout << "Enter word: ";
cin >> word;

 enter(word);
}
}
void enter(string word){
 if(word == "true"){
cout << "False" << endl;
}
 if(word == "false"){
cout << "True" << endl;
}
}