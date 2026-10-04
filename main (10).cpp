#include <iostream>
#include <cstring>

template <typename T>
bool isEqual(T a, T b)
{
    return a == b;
}

template <>
bool isEqual<const char*>(const char* a, const char* b){
    return strcmp(a, b) == 0;
}
int main()
{
    int a = 10;
    int b = 10;
    
    std::cout << isEqual(a, b) << std::endl;
    
    const char* c = "c";
    const char* d = "d";

    std::cout << isEqual(c, d) << std::endl;
    

    return 0;
}