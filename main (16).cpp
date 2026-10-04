#include <iostream>
#include <vector>

template <typename T>
void resizeVector(std::vector<T>& v, T size, T value){
    
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    
    std::cout << std::endl;
    
    v.resize(size, value);
    
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
}

int main()
{
    std::vector<int> v{1, 2};
    
    resizeVector(v, 3, 3);
    
    return 0;
}