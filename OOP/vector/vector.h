#ifndef VECTOR
#define VECTOR

class Vector{
    private:
        int length, *_arr;
        int* erace (int m);
        void shift (int m);
        void shiftRemove (int m);
    public:
        Vector (int length);
        ~Vector ();
        int& operator[] (int index);
        void insertVector (int index,int c);
        void removeVector (int index);
        void resizeVector (unsigned int m);
        int findVector (int a);
};

#endif // VECTOR
