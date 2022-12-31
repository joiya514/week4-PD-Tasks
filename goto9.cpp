#include <iostream>
using namespace std;
void total();
int redRoses;
int whiteRoses;
int tulips;
float redprice = 2;
float whiteprice = 4.10;
float tulipsprice = 2.50;
float sum;

main(){
system("cls");
while(true){
cout << "Enter number of Red Roses: ";
cin >> redRoses;
cout << "Enter number of White Roses: ";
cin >> whiteRoses;
cout << "Enter number of Tulips: ";
cin >> tulips;

 
sum = (2 * redRoses) + (4.10 * whiteRoses) + (2.50 * tulips);

total();
}

}


void total(){
 if(sum < 200){
cout << "Total price is: " << sum << endl;
}

 if(sum >= 200){
cout << "Price after discount is: " << sum - (0.20 * sum) << endl;
}

 }




