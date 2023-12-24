#include <iostream>

namespace my_new {
  

void* operator new(size_t size) {
  void* data = malloc(size);

  if (data == nullptr) {
    throw std::bad_alloc();
  }
  
  return data;
}

} // namespace my_new

int main() {
  void* some_data = my_new::operator new(1024);
}