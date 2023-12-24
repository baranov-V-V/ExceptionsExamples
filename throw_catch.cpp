#include <iostream>

struct MyClass {
};

int main() {
  try {
    throw 1;
  } catch (long i) {
    std::cout << "long\n";
  } catch (int i) {
    std::cout << "int\n";
  }

  try {
    throw MyClass();
  } catch (MyClass &) {
    std::cout << "Ref\n";
  }

  try {
    throw new MyClass();
  } catch (MyClass* my) {
    std::cout << "Ptr\n";
    delete my;
  }
}