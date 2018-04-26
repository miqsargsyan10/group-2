#include <iostream>

int rec_fun(int n, int k){
    if ( k > 1 ) {
        return n * rec_fun(n, --k);
    }
}

int main(){
    int n, k;
    std::cout << "Input n number: ";
    std::cin >> n;
    std::cout << "Input k number: ";
    std::cin >> k;
    std::cout << rec_fun(n, k) << std::endl;
}
