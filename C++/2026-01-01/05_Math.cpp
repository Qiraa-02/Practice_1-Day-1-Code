#include<iostream>
#include<cmath> //www.cplusplus.com/reference/cmath
int main(){
    double x =3;
    double y =4;
    double z;
    // Maximum
    z = std::max(x, y);
    std::cout << z<<'\n';
    // Minimum
    z = std::min(x, y);
    std::cout << z<<'\n';

    //Cmath
    //Power
    z = pow(x, y);
    std::cout << z<<'\n';
    //Square Root
    z = sqrt(9);
    std::cout << z<<'\n';
    //Absolute
    z = abs(-3);
    std::cout << z<<'\n';
    //Round
    z = round(4.49);
    std::cout << z<<'\n';
    //Round Up (Ceil)
    z = ceil(7.1);
    std::cout << z<<'\n';
    //Round Down (Floor)
    z = floor(4.9);
    std::cout << z<<'\n';
    return 0;
}