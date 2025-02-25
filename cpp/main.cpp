#include "./include/array/static_array.hpp"
#include <iostream>

int main() {
    StaticArray<int> arr(5);
    arr.insert(0, 10);
    arr.insert(1, 20);
    arr.insert(2, 30);
    arr.print();

    arr.remove(1);
    arr.print();

    return 0;
}
