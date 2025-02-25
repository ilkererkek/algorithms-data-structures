from src.array.static_array import StaticArray

def main():
    arr = StaticArray(5)
    arr.insert(0, 10)
    arr.insert(1, 20)
    arr.insert(2, 30)
    print(arr)

    arr.remove(1)
    print(arr)

if __name__ == "__main__":
    main()
