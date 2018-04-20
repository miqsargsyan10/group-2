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
                top = sizeStack;
                arr[top] = number;
                sizeStack++;
            } else {
                std::cout << "Sorry but stack is full!!\n";
            }
        }
        int pop () {
            if ( sizeArr() > 0 ) {
                int popNumber = arr[top];
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
