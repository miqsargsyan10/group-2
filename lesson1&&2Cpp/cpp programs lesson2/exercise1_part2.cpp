#include <iostream>
#include <string>

int main(){
    int a, age;
    std::string name;
    std::cout << "What is your name? \n";
    std::cin >> name;
    std::cout << "How old are you? \n";
    std::cin >> age;
    a = name == "Michael" && age == 17 ? 1 : 0;
    std::cout << "a = " << a << std::endl;
    return 0;
}
