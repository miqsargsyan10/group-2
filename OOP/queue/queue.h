#ifndef QUEUE
#define QUEUE

class Queue{
    private:
        int length, n, *_arr;
    public:
        Queue (int length);
        ~Queue ();
        void push (int a);
        void pop ();
        int size ();
        bool isEmpty();
};

#endif // QUEUE
