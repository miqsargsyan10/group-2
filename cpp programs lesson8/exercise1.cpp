#include <iostream>
#include <string>

struct person{
    std::string firstName;
    std::string lastName;
    int age;
    bool student;
    std::string gender;
    std::string nation;
};

int main(){
    person ani = {"Ani", "Hakobyan", 19, true, "female", "armenian"};
    person artur = {"Artur", "Gasparyan", 26, false, "male", "armenian"};
    person arpine = {"Arpine", "Harutyunyan", 20, false, "female", "armenian"};
    person armen = {"Armen", "Abrahamyan", 20, true, "male", "armenian"};
    person hrach = {"Hrach", "Gevorgyan", 20, true, "male", "armenian"};
    person lilit = {"Lilit", "Melkumyan", 19, true, "female", "armenian"};
    person michael = {"Michael", "Sargsyan", 17, true, "male", "armenian"};
    person tigran = {"Tigran", "Hovhannisyan", 20, true, "male", "armenian"};
    person nvard = {"Nvard", "Harutyunyan", 19, true, "female", "armenian"};
    person mariam = {"Mariam", "Karapetyan", 19, false, "female", "armenian"};
    person edgar = {"Edgar", "Grigoryan", 16, false, "male", "armenian"};
    person sasha = {"Aleksandr", "Avagyan", 20, true, "male", "armenian"};
    person nona = {"Nona", "Musaelian", 19, true, "female"};
    person arr[] = {ani, artur, arpine, armen, hrach, lilit, michael, tigran, nvard, mariam, edgar, sasha, nona};
    std::string name;
    std::cout << "Search...";
    std::cin >> name;
    for ( int i = 0; i < 13; i++ ){
        if ( name == arr[i].firstName ) {
            std::cout << arr[i].firstName << " " << arr[i].lastName << ": His/her age is " << arr[i].age << ": Student state is ";
            if ( arr[i].student == 1 ) {
                std::cout << "true";
            } else {
                std::cout << "false";   
            }
            std::cout << ": His/her gender is " << arr[i].gender << ": He/she is " << arr[i].nation << ": \n";
            break;
        }
    }
}
