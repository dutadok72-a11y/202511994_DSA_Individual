#include <iostream>
#include <string>
using namespace std;

int main() {
long keyNumber=75607136; 
int phoneNumbers[3];

int i = 0;
//filling numbers 
do {
cout<< "Enter your phone number" <<endl;
cin>> phoneNumbers[i];
i = i + 1;
} while ( i < 3);

//1inear search
//numbers DUT number's
for (int i = 0; i < 3; i++){
if (phoneNumbers[i] == keyNumber){
cout<< "Dut number's found" <<endl;
break;
}
}

string name;
    return 0;
}