#include <iostream>
using namespace std;
int main(){

    double sales = 95000;
    const double stateTaxRate = 4;
    const double countyTaxRate = 2;
    double state = (sales * stateTaxRate) / 100;
    double county = (sales * countyTaxRate) / 100;
    
    cout << "Sales = $ " << sales << endl;
    cout << "State = $ " << state << endl;
    cout << "County = $ " << county << endl; 




    return 0;
}