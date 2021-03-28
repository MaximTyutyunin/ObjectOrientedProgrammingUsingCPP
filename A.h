#pragma once
#ifndef A_H// this one requires "#endif" after the class
#define A_H
template <class T>
class MyArray {
    int size;
    T* myArrayPtr;
public:
    MyArray(int size = 0)
    {
        myArrayPtr gradesArray{ new int[size]{} };
    }
    MyArray(const MyArray&) {
        myArrayPtr = new T[size];
    }
    MyArray(const MyArray&) = delete

        T get(int i) {
        return myArrayPtr[i];
    }

    void set(int i, T value) {
        myArrayPtr[i] = T;
    }

    string toString() {
        for (inti = 0; i < size + 1; i++) {
            cout << myArrayPtr[i];
        }
    }


};

//template <class T>
//T mypair<T>::getmax()
//{
//    T retval;
//    retval = a > b ? a : b;
//    return retval;
//}

#endif
