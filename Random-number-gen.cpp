#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    //short elapsedSeconds = time(0); //jan 1 1970
    srand(time(0));
    //srand(elapsedSeconds);
    short number = rand();
    cout << number;


    return 0;
}