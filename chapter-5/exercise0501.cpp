#include <iostream>
#include <string>

int main()
{
  int age{};
  std::string name{};

  std::cout << "Enter your first name: ";
  std::cin >> name;
  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Welcome, " << name << ", you are " << age << " years old.\n";
}
