#include <iostream>
using std::cout;
int main(){
    int student = 30;

    //Add
    student = student + 1;
    cout << student << '\n';
    student += 1;
    cout << student << '\n';
    //If just want add 1
    student++;
    cout<<student<<'\n';

    //Subtract
    student = student -1;
    cout<<student<<'\n';
    student -= 1;
    cout<<student<<'\n';
    student--;
    cout<<student<<'\n';

    //Multi
    student = student * 2;
    cout<<student<<'\n';
    student *=2;
    cout<<student<<'\n';

    //Divide
    student = student / 2;
    cout<<student<<'\n';
    student /=2;
    cout<<student<<'\n';

    //Modulus
    student = student % 4;
    cout<<student<<'\n';
};