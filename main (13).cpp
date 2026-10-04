#include <iostream>
#include <vector>

std::vector<int> createVectorFromInput(){
    std::vector<int> vec;
    
    int number;
    std::cin >> number;
    
    while(number != 0){
        vec.push_back(number);
        std::cin >> number;
        
    }
    
    return vec;
}

int main()
{
    std::vector<int> inputVec = createVectorFromInput();

    std::cout << "Size: " << inputVec.size() << std::endl;

    for (int i = 0; i < inputVec.size(); i++)
    {
        std::cout << inputVec[i] << " ";
    }
    return 0;
}