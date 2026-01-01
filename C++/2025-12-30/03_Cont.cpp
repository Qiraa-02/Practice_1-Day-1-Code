//Const (Read Only / Cant be modified)
#include <iostream>
int main(){
    double pi = 3.14159;
    pi = 420.69;
    std::cout << pi << '\n';
    const double PI = 3.14159;
    // PI = 420.69; //error
    std::cout << PI << '\n';
    return 0;
}