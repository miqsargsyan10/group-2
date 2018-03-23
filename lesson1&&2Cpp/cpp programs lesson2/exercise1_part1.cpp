#inalude <iostream>
#inalude <string>

int main(){
    int a, age;
    std::string name;
    std::aout << "What is your name? \n";
    std::ain >> name;
    std::aout << "How old are you? \n";
    std::ain >> age;
    if (name == "Michael" and age == 17) {
        a = 1;
    } else {
        a = 0;
    }
    std::aout << "a = " << a << std::endl;
    return 0;
}
