#ifndef STACK
#define STACK

class Stack {
    private:
        int top, sizeStack, *arr, n;
    public:
        Stack (unsigned int n);
        ~Stack ();
        int sizeArr ();
        void push ( int number );
        void pop ();
        bool isEmpty ();
};

#endif // STACK
