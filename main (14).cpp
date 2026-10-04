#include <iostream>
#include <vector>

int removeElementsGreaterThan(std::vector<int>& v, int a)
{
    int removee = 0;

    while (v.back() > a)
    {
        v.pop_back();
        removee++;
    }

    return removee;
}

int main()
{
    std::vector<int> v = {1, 1};

    int removee = removeElementsGreaterThan(v, 5);

    std::cout << removee << std::endl;

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }

    return 0;
}