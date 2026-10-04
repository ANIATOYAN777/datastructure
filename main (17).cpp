#include <iostream>
#include <vector>


std::vector<int> mergeSortedVectors(std::vector<int>& vec1, std::vector<int>& vec2){
    std::vector<int> v3;
    
    int i = 0;
    int j = 0;
    
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            v3.push_back(vec1[i]);
            i++;
        }
        else
        {
            v3.push_back(vec2[j]);
            j++;
        }
    }

    while (i < vec1.size())
    {
        v3.push_back(vec1[i]);
        i++;
    }

    while (j < vec2.size())
    {
        v3.push_back(vec2[j]);
        j++;
    }

    return v3;
}


int main()
{
    std::vector<int> vec1={1,2};
    std::vector<int> vec2={1,3};
    
    std::vector<int> merged = mergeSortedVectors(vec1, vec2);

    for (int i = 0; i < merged.size(); i++)
    {
        std::cout << merged[i] << " ";
    }

    return 0;
}