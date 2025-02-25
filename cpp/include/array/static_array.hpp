// StaticArray.hpp
#include <iostream>
#include <stdexcept>
#include <cstddef>
#ifndef STATIC_ARRAY_HPP
#define STATIC_ARRAY_HPP
template <typename T>
class StaticArray {
  private:
    T* m_array;
    size_t m_length;
  bool is_valid_index(size_t index) {
    return index >= 0 && index < m_length;
  }
  public:
    StaticArray(size_t length) : m_array(new T[length]), m_length(length) {}

    ~StaticArray() {
        delete[] m_array;
    }

    size_t getLength() const {
        return m_length;
    }

    T& operator[](size_t index) {\
      if (!is_valid_index(index)) {
          throw std::out_of_range("Index out of range");
      }
      return m_array[index];
    }

    void Insert(size_t index, T value) {
        if(is_valid_index(index)) {
            m_array[index] = value;
        }
    }

    void Remove(size_t index) {
        if (index >= m_length) {
            return;
        }

        m_array[index] = T();
    }

    void Print() {
        for (size_t i = 0; i < m_length; i++) {
            std::cout << m_array[i] << " ";
        }
        std::cout << std::endl;
    }
};
#endif