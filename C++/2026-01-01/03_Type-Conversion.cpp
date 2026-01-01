#include <iostream>
using std::cout;
int main(){
    //Implicit
    int x = 3.14;
    cout<<x<<'\n';
    char z = 100;
    cout<<z<<'\n';

    //Explicit
    double y = (int) 3.14;
    cout<<y<<'\n';
    cout<<(char)100<<'\n';

    //Example
    int correct = 8;
    int question = 10;
    // double score = correct/question*100; it will be 0%
    double score = (double)correct/question*100;
    cout<<score<<"%"<<'\n';
    return 0;
};