#include <iostream>
#include <vector>

void manageCapacity(std::vector<int>& v)
{
    std::cout << "size: " << v.size() << std::endl;
    std::cout << "capacity: " << v.capacity() << std::endl;

    v.reserve(v.size() + 500);

    for (int i = 1; i <= 500; i++)
    {
        v.push_back(i);
    }

    std::cout << "size: " << v.size() << std::endl;
    std::cout << "capacity: " << v.capacity() << std::endl;
}

int main()
{
    std::vector<int> v;

    manageCapacity(v);

    return 0;
}