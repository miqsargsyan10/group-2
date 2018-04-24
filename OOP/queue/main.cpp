#include <iostream>
#include "queue.h"

int main()
{
    Queue queue(5);
    int cin;
    while (true) {
        std::cout << "For push number press 1\nFor pop number press 2\nFor call function size press 3\nFor call function isEmpty press 4\nFor out of system press 0\n";
        std::cin >> cin;
        if (cin == 0) {
            std::cout << "Goodbye!!\n";
            break;
        }
        if (cin == 1) {
            int pushNumber;
            std::cout << "Input push number... ";
            std::cin >> pushNumber;
            queue.push(pushNumber);
        } else if (cin == 2) {
            queue.pop();
        } else if (cin == 3) {
            std::cout << "Size of queue is " << queue.size() << std::endl;   
        } else if (cin == 4) {
            if (queue.isEmpty()) {
                std::cout << "Queue is empty!!\n";   
            } else {
                std::cout << "Queue is not empty!!\n";
            }
        } else {
            std::cout << "You input wrong number.Try again\n";   
        }
        std::cout << "-----------------\n";
    }
}
