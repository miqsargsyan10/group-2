#include <iostream>
#include <string>

int main () {    
    std::string yourName;
    std::string pairName;
    std::string yourAge;
    std::string pairAge;
    std::cout << "Hello \n";
    std::cout << "What's Your name? \n";
    std::cin >> yourName;
    std::cout << "How old are you? \n";
    std::cin >> yourAge;
    std::cout << "Enough about You, lets talk about your pair. \n";
    std::cout << "What's her/his name? \n";
    std::cin >> pairName;
    std::cout << "How old is he/she? \n";
    std::cin >> pairAge;
    if ( yourAge < pairAge ) {
    	std::cout << pairName << " is older than " << yourName << "\n"; 
    } else {
    	std::cout << yourName << " is older than " << pairName << "\n";
    };    
    if ( yourAge == pairAge ) {
        std::cout << pairName << " is the same age as " << yourName << "\n";
    };
}
