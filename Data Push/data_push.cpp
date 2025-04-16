

#include <iostream>
using namespace std;
int main(){
int number_one;
int number_two;
char string;
cout << "Inter a Number: ";
cin >> number_one;
cout << "Inter your Operator: ";
cin >> string;
cout << "Inter a Secound Number: ";
cin >> number_two;
if(string == '+'){
    cout << "Your sum is = " << number_one + number_two;
}

else{
    cout << endl << "Some thing is Worng: ";
}
    return 0;
}

