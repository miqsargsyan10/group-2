#include <iostream>
#include <string>

int main(){
    int yourAge, pairAge, a;
    std::string yourName, pairName;
    std::cout << "What is your name? \n";
    std::cin >> yourName;
    std::cout << "How old are you? \n";
    std::cin >> yourAge;
    std::cout << "What is pair name? \n";
    std::cin >> pairName;
    std::cout << "How old are pair? \n";
    std::cin >> pairAge;
    a = ( yourName == "Michael" && yourAge == 17 ) || ( pairName == "Smbat" && pairAge == 24 ) ? 1 : 0;
    std::cout << "a = " << a << std::endl;
    return 0;
}
