#include <iostream>

class MyClass {
public:
  MyClass() { std::cout << "MyClass::MyClass()\n"; }
  ~MyClass() { std::cout << "MyClass::~MyClass()\n"; }
};

int main() {
  try {
    throw MyClass();
  }
  catch(MyClass& e) {
    std::cout << "Caught MyClass\n";
  }
  
  return 0;
}