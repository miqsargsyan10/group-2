#include <iostream>
#include <string>

void decomposition( std::string str ){
    if ( str.length() > 0 ) {
        std::cout << str.substr( str.length() - 1, 1);
        str = str.substr((0), (str.length() - 1));
        decomposition( str );
    }
}

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    decomposition( str );
    return 0;
}
