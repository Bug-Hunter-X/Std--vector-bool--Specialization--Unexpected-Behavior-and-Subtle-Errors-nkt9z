#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);

  // Correct way to access elements:
  bool b1 = vec[0]; 
  bool b2 = vec.at(1);

  std::cout << "b1: " << b1 << std::endl; // Output: true
  std::cout << "b2: " << b2 << std::endl; // Output: false

  // Alternative to avoid the issue altogether
  std::vector<char> vec2; 
  vec2.push_back(1); // Representing true
  vec2.push_back(0); // Representing false
  
  // Accessing with correct indexing
  char c1 = vec2[0];
  char c2 = vec2[1];
  
  std::cout << "c1: " << c1 << std::endl; // Output: 1
  std::cout << "c2: " << c2 << std::endl; // Output: 0
  return 0;
}
