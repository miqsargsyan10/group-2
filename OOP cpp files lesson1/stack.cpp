#include <iostream>

class stackClass {
    private:
        unsigned int top, sizeStack, popNumber;
        int arr[10];
        int sizeArr(){
            return sizeStack;
        }
    public:
        stackClass ()
            :top(0),
            sizeStack(0)
        {
            std::cout << "Hello\n";
        }
        ~stackClass () {
            std::cout << "Bye bye\n";
        }
        void push ( int number ) {
            if ( sizeStack < 10 ) {
                arr[top] = number;
                sizeStack++;
                top = sizeStack;
            } else {
                std::cout << "Sorry but stack is full!!\n";
            }
        }
        int pop () {
            if ( sizeArr() > 0 ) {
                popNumber = arr[top];
                arr[top] = 0;
                top--;
                sizeStack = top;
                return popNumber;
            } else {
                std::cout << "Sorry but stack is empty!!\n";
            }
        }
        bool isEmpty () {
            if ( sizeArr() == 0 ) {
                return true;
            }
            return false;
        }
};
