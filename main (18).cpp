#include <iostream>
#include <vector>

int findSubsequence(const std::vector<int>& v1, const std::vector<int>& v2)
{
    for (int i = 0; i <= v1.size() - v2.size(); i++)
    {
        bool found = true;

        for (int j = 0; j < v1.size(); j++)
        {
            if (v1[i + j] != v2[j])
            {
                found = false;
                break;
            }
        }

        if (found)
            return i;
    }

    return -1;
}

int main()
{
    std::vector<int> v1 = {1, 2};
    std::vector<int> v2 = {1};

    int index = findSubsequence(v1, v2);

    std::cout << index << std::endl;

    return 0;
}