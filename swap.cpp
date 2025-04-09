#include <iostream>
int main(){

    int a = 10;
    int b = 20;
    int temp = a;
    a = b;
    temp = b;
    std::cout << temp;  


    return 0;
}