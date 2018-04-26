#ifndef LIST
#define LIST


class List {
    private:
        struct Node {
            int _value;
            Node* _next;
            Node* _prev;
            Node(int value, Node* next = NULL, Node* prev = NULL)
                :_next(next)
                 ,_prev(prev)
                 ,_value(value)
            {}
        };

        Node* _head;
        Node* _tail;
        unsigned int _size;
        void* findNodeFromStart(unsigned int index);
        void* findNodeFromEnd(unsigned int index);
    public:
        List();
        List(const List&);
        ~List();
        int& operator[](unsigned int); 
        int find(int);
        void insert(int, unsigned int);
        void pushFront(int value);
        void pushEnd(int value);
        int remove(unsigned int);
        int popFront();
        int popEnd();
        int size();
        void print();
};

#endif  //LIST
