#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair
{
    T1 element1;
    T2 element2;
    
    public:
    
    Pair(T1 element11, T2 element22) {
        element1 = element11;
        element2 = element22;
        }
    
    void print(){
        std::cout << "element1: " << element1 << std::endl;
        std::cout << "element2: " << element2;
    }
};

int main() 
{
    Pair<int, std::string> class1(1, "abc");
    class1.print();
}