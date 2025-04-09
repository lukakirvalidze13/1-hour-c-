#include <iostream>
int main(){

    int x = 10;
    int y = x++; //x = 11; y = 10 postfix;
    std::cout << y << "\n" << x;
    //int y = ++x; // y = 11; y = 11 prefix
    //std::cout << x << "\n" << y;


    return 0;
}