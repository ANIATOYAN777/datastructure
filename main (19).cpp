#include "Vector.h" 
#include <cassert> 
#include <iostream>
#include <stdexcept>

v.push_back(5);
assert(v.size() == 1);
assert(v[0] == 5);

v.push_back(10);
assert(v.size() == 2);
assert(v.back() == 10);

Vector<int> empty;
empty.push_back(100);
assert(empty.size() == 1);
assert(empty.front() == 100);

std::cout << "test_push_back passed" << std::endl;
}

v.pop_back();
assert(v.size() == 1);
assert(v.back() == 10);


v.pop_back();
assert(v.empty());


bool error = false;
try {
    v.pop_back();
} catch (const std::underflow_error&) {
    error = true;
}
assert(error);

std::cout << "test_pop_back passed\n";
}


assert(v[1] == 20);

assert(v[0] == 10);
assert(v[2] == 30);


v[1] = 50;
assert(v[1] == 50);

std::cout << "test_operator_bracket passed" << std::endl;
}


assert(v.back() == 20);


Vector<int> one;
one.push_back(7);
assert(one.back() == 7);

bool error = false;
try {
    v.clear();
    v.back();
} catch (const std::out_of_range&) {
    error = true;
}
assert(error);

std::cout << "test_back passed" << std::endl;
}

assert(v.front() == 10);


Vector<int> one;
one.push_back(7);
assert(one.front() == 7);


bool error = false;
try {
    one.clear();
    one.front();
} catch (const std::out_of_range&) {
    error = true;
}
assert(error);

std::cout << "test_front passed" << std::endl;
}


v.insert(1, 20);
assert(v.size() == 3);
assert(v[0] == 10);
assert(v[1] == 20);
assert(v[2] == 30);


v.insert(0, 5);
assert(v[0] == 5);
assert(v.size() == 4);


v.insert(static_cast<int>(v.size()), 40);
assert(v.back() == 40);
assert(v.size() == 5);


bool error = false;
try {
    v.insert(-1, 100);
} catch (const std::out_of_range&) {
    error = true;
}
assert(error);

std::cout << "test_insert passed" << std::endl;
}

v.erase(1);
assert(v.size() == 2);
assert(v[0] == 10);
assert(v[1] == 30);

v.erase(0);
assert(v.size() == 1);
assert(v[0] == 30);


v.erase(0);
assert(v.empty());


bool error = false;
try {
    v.erase(0);
} catch (const std::out_of_range&) {
    error = true;
}
assert(error);

std::cout << "test_erase passed" << std::endl;
}

Vector<int> b;
b.push_back(7);


a.swap(b);
assert(a.size() == 1);
assert(a[0] == 7);
assert(b.size() == 2);
assert(b[0] == 1);
assert(b[1] == 2);

Vector<int> empty;
a.swap(empty);
assert(a.empty());
assert(empty.size() == 1);
assert(empty[0] == 7);

std::cout << "test_swap passed" << std::endl;
}

v.clear();
assert(v.size() == 0);
assert(v.empty());


v.clear();
assert(v.empty());

// Capacity stays allocated
assert(v.capacity() >= 2);

std::cout << "test_clear passed"<< std::end;
}

v.resize(4);
assert(v.size() == 4);
assert(v[0] == 10);
assert(v[1] == 20);
assert(v[2] == 0);
assert(v[3] == 0);


v.resize(1);
assert(v.size() == 1);
assert(v[0] == 10);


v.resize(0);
assert(v.empty());


bool error = false;
try {
    v.resize(-1);
} catch (const std::invalid_argument&) {
    error = true;
}
assert(error);

std::cout << "test_resize passed" << std::endl;
}

Vector<int> copy(original);
assert(copy.size() == 2);
assert(copy[0] == 10);
assert(copy[1] == 20);


copy[0] = 99;
assert(original[0] == 10);
assert(copy[0] == 99);


Vector<int> empty;
Vector<int> empty_copy(empty);
assert(empty_copy.empty());

std::cout << "test_copy_constructor passed" << std::endl;
}

Vector<int> copy;
copy.push_back(99);


copy = original;
assert(copy.size() == 2);
assert(copy[0] == 10);
assert(copy[1] == 20);


copy[0] = 50;
assert(original[0] == 10);


Vector<int> empty;
copy = empty;
assert(copy.empty());

original = original;
assert(original.size() == 2);
assert(original[0] == 10);
assert(original[1] == 20);

std::cout << "test_assignment_operator passed" << std::endl;
}

test_push_back();
test_pop_back();
test_operator_bracket();
test_back();
test_front();
test_insert();
test_erase();
test_swap();
test_clear();
test_resize();
test_copy_constructor();
test_assignment_operator();

std::cout << "All tests passed" << std::endl;

return 0;
}