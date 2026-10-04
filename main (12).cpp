#include <iostream>
#include <vector>

void workWithEmptyVector(){
    std::vector<int> vec;
    
    for(int i = 1; i <= 10; i++){
        vec.push_back(i);
        
        std::cout << "size: " << vec.size() << " ";
        std::cout << "capacity: " << vec.capacity() << std::endl;
    }
    
    for(int i = 0; i < vec.size() ; i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    workWithEmptyVector();

    return 0;
}