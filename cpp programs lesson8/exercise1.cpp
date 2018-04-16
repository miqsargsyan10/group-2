#include <iostream>
#include <string>

struct person{
    std::string firstName;
    std::string lastName;
    int age;
    bool student;
    std::string gender;
    std::string nation;
    bool mStatus;
};

int main(){
    person ani = {"Ani", "Hakobyan", 19, true, "female", "armenian", false};
    person artur = {"Artur", "Gasparyan", 26, false, "male", "armenian", false};
    person arpine = {"Arpine", "Harutyunyan", 20, false, "female", "armenian", false};
    person armen = {"Armen", "Abrahamyan", 20, true, "male", "armenian", false};
    person hrach = {"Hrach", "Gevorgyan", 20, true, "male", "armenian", false};
    person lilit = {"Lilit", "Melkumyan", 19, true, "female", "armenian", false};
    person michael = {"Michael", "Sargsyan", 17, true, "male", "armenian", false};
    person tigran = {"Tigran", "Hovhannisyan", 20, true, "male", "armenian", false};
    person nvard = {"Nvard", "Harutyunyan", 19, true, "female", "armenian", false};
    person mariam = {"Mariam", "Karapetyan", 19, false, "female", "armenian", false};
    person edgar = {"Edgar", "Grigoryan", 16, false, "male", "armenian", false};
    person sasha = {"Aleksandr", "Avagyan", 20, true, "male", "armenian", false};
    person nona = {"Nona", "Musaelian", 19, true, "female", "armenian", false};
    person arr[] = {ani, artur, arpine, armen, hrach, lilit, michael, tigran, nvard, mariam, edgar, sasha, nona};
    std::string name;
    std::cout << "Search... ";
    std::cin >> name;
    for ( int i = 0; i < 13; i++ ){
        if ( name == arr[i].firstName ) {
            if ( arr[i].gender == "female" ) {
                if ( arr[i].mStatus == 0 ) {
                    std::cout << "Miss ";
                } else {
                    std::cout << "Misses ";
                }
                std::cout << arr[i].firstName << " " << arr[i].lastName << ": Her age is " << arr[i].age << ": Student state is ";
                if ( arr[i].student == 1 ) {
                    std::cout << "true";
                } else {
                    std::cout << "false";
                }
                std::cout << ": Her gender is " << arr[i].gender << ": She is " << arr[i].nation << ": \n";
            } else {
                std::cout << "Mister " << arr[i].firstName << " " << arr[i].lastName << ": His age is " << arr[i].age << ": Student state is ";
                if ( arr[i].student == 1 ) {
                    std::cout << "true";
                } else {
                    std::cout << "false";
                }
                std::cout << ": His gender is " << arr[i].gender << ": He is " << arr[i].nation << ": \n";
            }
            break;
        }
    }
}
