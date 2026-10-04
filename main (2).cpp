#include <iostream>
#include <string>

template <typename T>
void Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;

}

int main()
{
    int a = 12;
    int b = 21;
    Swap(a, b);
    std::cout << a << " " << b << std::endl;
    
    double c = 1.2;
    double d = 2.1;
    Swap(c, d);
    std::cout << c << " " << d << std::endl;
    
    std::string e = "abc";
    std::string f = "cba";
    Swap(e, f);
    std::cout << e << " " << f << std::endl;

    return 0;
}