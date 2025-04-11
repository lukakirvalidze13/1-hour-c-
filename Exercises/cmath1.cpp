#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int number,power_number,power;
    cout << "Input a number" << endl;
    cin >> number;
    cout << "Power to \n";
    cin >> power_number;
    power = pow(number,power_number);
    cout << number << "^" << power_number << " = " << power;

    





    return 0;
}