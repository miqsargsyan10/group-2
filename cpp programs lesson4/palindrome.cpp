#include <iostream>
#include <string>

bool palindrome( std::string word )
{
    int length = word.length();

    std::string first = word.substr(0,1);
    std::string last = word.substr((length - 1), 1);

    if (first == last) {
        word = word.substr((1), (length - 2));
        if (word.length() <= 1) {
            return true;
        }
        palindrome(word);

    } else {
        return false;
    }
}

int main()
{
    std::string word = "anna";
    if ( palindrome( word ) == true ) {
        std::cout << "word is a palindrome!" << std::endl;
    } else {
        std::cout << "word is not a palindrome..." << std::endl;
    }
    return 0;
}
