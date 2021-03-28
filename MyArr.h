#pragma once
#include<iostream>
using namespace std;
template <class T>
class MyArray {
   
public:
    MyArray(int size = 0)
    {
        myArrayPtr = new T[size];
    }
    MyArray(const MyArray&) {
        myArrayPtr = new T[size];
    }
    MyArray(const MyArray&) = delete

    T& get(int i) {
        return myArrayPtr[i];
    }

    void set(int i, T value) {
        myArrayPtr[i] = T;
    }

    string toString() const{
        for (inti = 0; i < size + 1; i++) {
            cout << myArrayPtr[i] << " ";
        }
    }
private:
    int size;
    T* myArrayPtr;


};


