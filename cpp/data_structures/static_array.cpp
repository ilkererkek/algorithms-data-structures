#include <cstddef>
#include <iostream>
template <typename T>
class StaticArray {
  private:
    T* m_array;
    size_t m_length;
  bool isValidIndex(size_t index) {
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
      if (!isValidIndex(index)) {
          throw std::out_of_range("Index out of range");
      }
      return m_array[index];
    }

    void insert(size_t index, T value) {
        if(isValidIndex(index)) {
            m_array[index] = value;
        }
    }

    void remove (size_t index) {
        if (index >= m_length) {
            return;
        }

        m_array[index] = T();
    }

    void print() {
        for (size_t i = 0; i < m_length; i++) {
            std::cout << m_array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
  StaticArray<int> arr(5);

  arr.insert(0, 10);
  arr.insert(1, 20);
  arr.insert(2, 30);
  arr.insert(3, 40);
  arr.insert(4, 50);

  arr.print();

  arr.remove(2);
  arr.print();

  return 0;
}
