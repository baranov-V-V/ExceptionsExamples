#include <iostream>

struct MyClass {
  virtual ~MyClass() {}
};

struct Derived : MyClass {};

int main() {
  try {
    throw new Derived();
  } catch (MyClass* b) {
    std::cout << "Base ptr\n";
    delete b;
  } catch (Derived* b) {
    std::cout << "Derived ptr\n";
    delete b;
  }

  try {
    try {
      throw Derived();
    } catch (MyClass&) {
      std::cout << "Base\n";
      throw;
    }
  } catch (Derived&) {
    std::cout << "Derived\n";
  }

}