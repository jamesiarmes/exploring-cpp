#include <iostream>
#include <string>

int main()
{
  std::string a{"abc"}, b{"abc"};

  if (a != b) std::cout << "wrong: a != b\n";
  if (a < b) std::cout << "wrong: a < b\n";
  if (a > b) std::cout << "wrong: a > b\n";
  if (a == b) std::cout << "okay: a == b\n";
  if (a >= b) std::cout << "okay: a >= b\n";
  if (a <= b) std::cout << "okay: a <= b\n";

  a.push_back(40);
  if (a != b) std::cout << "okay: a != b\n";
  if (a < b) std::cout << "wrong: a < b\n";
  if (a > b) std::cout << "okay: a > b\n";
  if (a == b) std::cout << "wrong: a == b\n";
  if (a >= b) std::cout << "okay: a >= b\n";
  if (a <= b) std::cout << "wrong: a <= b\n";

  b.push_back(42);
  if (a != b) std::cout << "okay: a != b\n";
  if (a < b) std::cout << "okay: a < b\n";
  if (a > b) std::cout << "wrong: a > b\n";
  if (a == b) std::cout << "wrong: a == b\n";
  if (a >= b) std::cout << "wrong: a >= b\n";
  if (a <= b) std::cout << "okay: a <= b\n";
}
