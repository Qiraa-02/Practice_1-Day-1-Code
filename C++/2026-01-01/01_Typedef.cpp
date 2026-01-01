//Typedef = reversed keyword used to create an additional name for another data type.
#include <iostream>
#include <vector>
typedef std::vector<std::pair<std::string,int >> pairlist_t;
typedef std::string text_t;

using text_w = text_t;
int main(){
    pairlist_t pairlist;
    text_w firstname = "Qiraa";
    std::cout << firstname << '\n';
    return 0;
};