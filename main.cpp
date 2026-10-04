#include <iostream>
#include <string>

template <typename T>
T printElement(T value)
{
    return value;
}

int main()
{
    std::cout << printElement<int>(2) << std::endl;
    std::cout << printElement<double>(2.2) << std::endl;
    std::cout << printElement<std::string>("abc") << std::endl;

    return 0;
}