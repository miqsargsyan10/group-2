#include <iostream>
#include <string>

int main(){
    int yourAge, pairAge,a;
    std::string yourName, pairName;
    std::cout << "What is your name? \n";
    std::cin >> yourName;
    std::cout << "How old are you? \n";
    std::cin >> yourAge;
    std::cout << "What is pair name? \n";
    std::cin >> pairName;
    std::cout << "How old are pair? \n";
    std::cin >> pairAge;
    if ( ( yourName == "Michael" and yourAge == 17 ) or ( pairName == "Smbat" and pairAge == 24 ) ) {
        a = 1;
    } else {
        a = 0;
    }
    std::cout << "a = " << a << std::endl;
    return 0;
}
