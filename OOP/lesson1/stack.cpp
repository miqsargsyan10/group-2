#include <iostream>

class Stack {
    private:
        int top, sizeStack, *arr, n;
    public:
        Stack (unsigned int n)
        {
            top = -1;
            sizeStack = 0;
            this->n = n;
            arr = new int [n];
            std::cout << "Hello\n";
        }
        ~Stack () {
            delete [] arr;
            std::cout << "Bye bye\n";
        }
        int sizeArr(){
            return sizeStack;
        }
        void push ( int number ) {
            if ( sizeStack < n ) {
                top = sizeStack++;
                arr[top] = number;
            } else {
                std::cout << "Sorry but stack is full!!\n";
            }
        }
        void pop () {
            if ( sizeArr() > 0 ) {
                int popNumber = arr[top];
                arr[top] = 0;
                sizeStack = top;
                top--;
                std::cout << "Removed integer is " << popNumber << std::endl;
            } else {
                std::cout << "Sorry but stack is empty!!\n";
            }
        }
        bool isEmpty () {
            return !(sizeArr());
        }
};