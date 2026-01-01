/* Namespace = Provides a solution for preventing name conflicts in large projects.
Each Entity needs a unique name.
Namespace allows for identically named entities as long as the namespace ar different
*/
#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    //using namespace first; //i dont need int x = 0, but it will be 1

    int x = 0;
    // int x = 1; // error
    std::cout << x << '\n';
    using namespace std; //Dont need for typing 'std::', but it will be conflict many std
    cout << first::x << '\n';
    using std::cout; //Just dont need fot typing 'std::' on std::cout
    cout << second::x << '\n';
    return 0;
}