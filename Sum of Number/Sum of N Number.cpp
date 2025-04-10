

#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        sum = sum + i;
    };
    cout << "The sum of the first " << number << " numbers is: " << sum << endl;
    return 0;
}