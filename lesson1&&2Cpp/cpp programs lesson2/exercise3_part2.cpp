#include <iostream>

int main(){
    int age, a;
    std::cout << "How old are you? \n";
    std::cin >> age;
    a = age < 10 || age > 60 ? 1 : 0;
    std::cout << "a = " << a << std::endl;
    return 0;
}
