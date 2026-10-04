#include <iostream>
#include <string>

template <typename T, int N>

class FixedArray{
    T arr[N];
    
    public:
    void set(int index, T value){
        arr[index] = value;
    }
    
    T get(int index){
        return arr[index];
    }
    
    int size(){
        return N;
    }
};

int main()
{
    FixedArray<int, 2> arr1;
    arr1.set(0, 2);
    arr1.set(1, 2);
    std::cout << arr1.get(0) << std::endl;
    std::cout << arr1.size() << std::endl;
    
    FixedArray<std::string, 2> arr2;
    arr2.set(0, "a");
    arr2.set(1, "b");
    std::cout << arr2.get(1) << std::endl;
    std::cout << arr2.size() << std::endl;

    return 0;
}