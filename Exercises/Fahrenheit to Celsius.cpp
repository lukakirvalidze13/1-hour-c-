#include <iostream>
using namespace std;
int main(){

    double fahrenheit;
    cout << "Enter temperature in fahrenheit" << endl;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5/9;
    cout << "In celsius = "<< celsius;

    return 0;
}