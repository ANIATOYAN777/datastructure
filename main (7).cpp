#include <iostream>
#include <string>

template <typename T, int N, int M>
class Matrix{
    T matrix[N][M];
    
    public:
    void set(int row, int col, T value){
        matrix[row][col] = value;
    }
    
    T get(int row, int col){
        return matrix[row][col];
    }
    
    void print(){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other){
        Matrix<T, N, M> sum;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                sum.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return sum;
    }
};

int main()
{
    Matrix<int, 2, 2> m1;
    m1.set(0, 0, 1);
    m1.set(0, 1, 1);
    m1.set(1, 0, 1);
    m1.set(1, 1, 1);
    
    std::cout << m1.get(0, 0) << std::endl;
    m1.print();
    
    Matrix<int, 2, 2> m2;
    m2.set(0, 0, 1);
    m2.set(0, 1, 1);
    m2.set(1, 0, 1);
    m2.set(1, 1, 1);
    
    std::cout << m2.get(0, 0) << std::endl;
    m2.print();
    
    Matrix<int, 2, 2> sum = m1 + m2;
    sum.print();
    
    
    
    Matrix<std::string, 2, 2> m11;
    m11.set(0, 0, "a");
    m11.set(0, 1, "a");
    m11.set(1, 0, "a");
    m11.set(1, 1, "a");
    
    std::cout << m11.get(0, 0) << std::endl;
    m11.print();
    
    Matrix<std::string, 2, 2> m22;
    m22.set(0, 0, "a");
    m22.set(0, 1, "a");
    m22.set(1, 0, "a");
    m22.set(1, 1, "a");
    
    
    std::cout << m22.get(0, 0) << std::endl;
    m22.print();
    
    Matrix<std::string, 2, 2> summ = m11 + m22;
    summ.print();
    return 0;
}