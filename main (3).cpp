#include <iostream>
#include <string>

template <typename T>
T sumArray(T* arr, int size)
{
    T sum = T();
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
};

int main()
{
    int arr1[3] = {1, 1, 1};
    std::cout << sumArray(arr1, 3) << std::endl;
    
    double arr2[3] = {1.1, 1.1, 1.1};
    std::cout << sumArray(arr2, 3) << std::endl;
    
    std::string arr3[3] = {"a", "b", "c"};
    std::cout << sumArray(arr3, 3) << std::endl;
    
    return 0;
}