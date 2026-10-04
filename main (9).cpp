#include <iostream>

template <typename T>
void printValue(T value){
    std::cout << value << std::endl;
}

template <>
void printValue<bool>(bool value){
    std::cout << (value ? "true" : "false") << std::endl;
}

template<>
void printValue<char*>(char* value){
    std::cout << "[" << value << "]" << std::endl;
}

int main()
{
    int a = 10;
    bool b = true;
    char c[] = "c";
    
    printValue(a);
    printValue(b);
    printValue(c);

    return 0;
}