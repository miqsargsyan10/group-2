#include <iostream>
#include "DList.h"


int main() {
    List list;
    for(int i = 0; i < 4; ++i) {
        list.pushFront(i);
        list.pushEnd(i);
    }
    list.print();
    //   for(int i = 0; i < list.size(); ++i)
    //       std::cout << list[i] << std::endl;
    //
    //  List list2 = list;
    //  std::cout << list.find(5) << std::endl;
    //  std::cout << list.find(2) << std::endl;
    //  std::cout << "size = " << list2.size() << std::endl;
    //  list2.print();
    //  std::cout << "========================\n";
    //  std::cout << "size = " << list.size() << std::endl;
    //  for(int size = list.size(), i = 0; i < size; ++i) {
    //      std::cout << list.popFront() << std::endl;
    //  }
    //   for(int size = list2.size(), i = 0; i < size; ++i) {
    //       std::cout << list2.popEnd() << std::endl;
    //   }
    std::cout << "========================\n";
    std::cout << list.popEnd() << std::endl;
    std::cout << list.popEnd() << std::endl;
    std::cout << "========================\n";
    return 0;
}
