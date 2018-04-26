#include <iostream>
#include <string>
#include <cmath>

struct person{
    std::string name;
    int age;
};

int main(){
    person bagrat = {"Bagrat", 20};
    person heriknaz = {"Heriknaz tati", 60};
    person lentrush = {"Lentrush ded", 57};
    person avtandil = {"Avtandil bala", 1};
    person sanatruk = {"Sanatruk", 14};
    person hitler = {"Hitler daday", 31};
    person monica = {"Monica", 19};
    person arr[] = {bagrat, heriknaz, lentrush, avtandil, sanatruk, hitler, monica};
    int Age, newAge = 22222, agePerson;
    std::string newName;
    std::cout << "Nermucir tariqy: ";
    std::cin >> Age;
    for ( int i = 0; i < 7; i++ ) {
	if ( newAge > std::abs( newAge - Age ) ) {
	    newAge = std::abs( arr[i].age - Age );
	    newName = arr[i].name;
	    agePerson = arr[i].age;
	}
    }
    std::cout << "Menq parzel enq vor tariqov amenamot mardy da " << newName << "n e vori tariqn e " << agePerson << std::endl;
    for ( int i = 0; i < 7; i++ ) {
	std::cout << arr[i].name << " - " << arr[i].age << "; "; 
    }
    std::cout << std::endl;
}
