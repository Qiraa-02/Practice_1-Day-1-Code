#include <iostream>
// cout << output
// cin >> input
int main(){
    std::string name;
    std::string fullname;
    int age;
    std::cout << "What's your name?: ";
    std::cin >> name;
    std::cin.ignore();// or on std::getline(std::cin>>std::ws, )
    std::cout << "What's your full name?: ";
    std::getline(std::cin, fullname); //For string with " " space
    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "Hello "<<fullname<<'\n';
    std::cout << "Hello "<< name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    return 0;
};