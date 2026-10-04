#include <iostream>
#include <vector>
#include <string>

template <typename T>
int linearSearch(const std::vector<T>& arr, const T& element){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> arr1 = {1, 2, 3};
    std::cout << linearSearch(arr1, 2) << std::endl;
    
    std::vector<double> arr2 = {1.1, 2.2, 3.3};
    std::cout << linearSearch(arr2, 3.3) << std::endl;
    
    std::vector<std::string> arr3 = {"a", "b", "c"};
    std::cout << linearSearch(arr3, std::string("a"));

    return 0;
}