#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <stdexcept>


template <typename T>
class Vector {
private:
    T* _data;
    std::size_t _size;
    std::size_t _capacity;

    void _resize_capacity(std::size_t new_capacity) {
        if (new_capacity < _size) {
            new_capacity = _size;
        }

        if (new_capacity == _capacity) {
            return;
        }

        T* arr;

        if (new_capacity > 0) {
            arr = new T[new_capacity]();
        } else {
            arr = nullptr;
        }

        for (std::size_t i = 0; i < _size; i++) {
            arr[i] = _data[i];
        }

        delete[] _data;
        _data = arr;
        _capacity = new_capacity;
    }

public:
    Vector() {
        _data = nullptr;
        _size = 0;
        _capacity = 0;
    }

    Vector(std::size_t initial_size) {
        _size = initial_size;
        _capacity = initial_size;

        if (_capacity > 0) {
            _data = new T[_capacity]();
        } else {
            _data = nullptr;
        }
    }

    ~Vector() {
        delete[] _data;
    }

    Vector(const Vector& other) {
        _size = other._size;
        _capacity = other._capacity;

        if (_capacity > 0) {
            _data = new T[_capacity]();
        } else {
            _data = nullptr;
        }

        for (std::size_t i = 0; i < _size; i++) {
            _data[i] = other._data[i];
        }
    }

    Vector& operator=(const Vector& other) {
        if (this == &other) {
            return *this;
        }

        T* new_data;

        if (other._capacity > 0) {
            new_data = new T[other._capacity]();
        } else {
            new_data = nullptr;
        }

        for (std::size_t i = 0; i < other._size; i++) {
            new_data[i] = other._data[i];
        }

        delete[] _data;

        _data = new_data;
        _size = other._size;
        _capacity = other._capacity;

        return *this;
    }

    void push_back(const T& value) {
        if (_size >= _capacity) {
            if (_capacity == 0) {
                _resize_capacity(1);
            } else {
                _resize_capacity(_capacity * 2);
            }
        }

        _data[_size] = value;
        _size++;
    }

    void pop_back() {
        if (empty()) {
            throw std::underflow_error("error");
        }

        --_size;
    }
    
    T& operator[](std::size_t index) {
        return _data[index];
    }

    const T& operator[](std::size_t index) const {
        return _data[index];
    }

    T& at(std::size_t index) {
        if (index >= _size) {
            throw std::out_of_range("error");
        }

        return _data[index];
    }

    const T& at(std::size_t index) const {
        if (index >= _size) {
            throw std::out_of_range("error");
        }

        return _data[index];
    }

    // 10. front()
    T& front() {
        if (empty()) {
            throw std::out_of_range("error");
        }

        return _data[0];
    }

    const T& front() const {
        if (empty()) {
            throw std::out_of_range("error");
        }

        return _data[0];
    }

    // 11. back()
    T& back() {
        if (empty()) {
            throw std::out_of_range("error");
        }

        return _data[_size - 1];
    }

    const T& back() const {
        if (empty()) {
            throw std::out_of_range("error");
        }

        return _data[_size - 1];
    }

    std::size_t size() const {
        return _size;
    }

    std::size_t capacity() const {
        return _capacity;
    }

    bool empty() const {
        return _size == 0;
    }

    void reserve(std::size_t new_capacity) {
        if (new_capacity > _capacity) {
            _resize_capacity(new_capacity);
        }
    }

    void clear() {
        _size = 0;
    }

    T* begin() {
        return _data;
    }

    const T* begin() const {
        return _data;
    }

    T* end() {
        if (_data == nullptr) {
            return nullptr;
        }

        return _data + _size;
    }

    const T* end() const {
        if (_data == nullptr) {
            return nullptr;
        }

        return _data + _size;
    }
    
    
void insert(int pos, const T& val) {
    if (pos < 0 || pos > _size) {
        throw std::out_of_range("error");
    }

    if (_size >= _capacity) {
        if (_capacity == 0) {
            _resize_capacity(1);
        } else {
            _resize_capacity(_capacity * 2);
        }
    }

    for (int i = _size; i > pos; i--) {
        _data[i] = _data[i - 1];
    }

    _data[pos] = val;
    _size++;
}

void erase(int pos) {
    if (pos < 0 || pos >= _size) {
        throw std::out_of_range("error");
    }

    for (int i = pos; i < _size - 1; i++) {
        _data[i] = _data[i + 1];
    }

    _size--;
}

void swap(Vector& other) {
    T* temp = _data;
    _data = other._data;
    other._data = temp;

    std::size_t temp_s = _size;
    _size = other._size;
    other._size = temp_s;

    std::size_t temp_c = _capacity;
    _capacity = other._capacity;
    other._capacity = temp_c;
}

void resize(int new_size) {
    if (new_size < 0) {
        throw std::invalid_argument("error");
    }

    std::size_t size = new_size;

    if (size > _capacity) {
        _resize_capacity(size);
    }

    if (size > _size) {
        for (std::size_t i = _size; i < size; i++) {
            _data[i] = T();
        }
    }

    _size = size;
}
};

#endif
