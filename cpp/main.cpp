#include "./include/array/static_array.hpp"
#include <iostream>

int main() {
    StaticArray<int> arr(5);
    arr.Insert(0, 10);
    arr.Insert(1, 20);
    arr.Insert(2, 30);
    arr.Print();

    arr.Remove(1);
    arr.Print();

    return 0;
}
