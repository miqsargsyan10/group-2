#include <iostream>

int main(){
    int age, a;
    std::cout << "How old are you? \n";
    std::cin >> age;
    if ( age < 10 or age > 60 ) {
        a = 1;
    } else {
        a = 0;
    }
    std::cout << "a = " << a << std::endl;
    return 0;
}
