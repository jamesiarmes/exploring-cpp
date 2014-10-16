#include <iostream>

int main()
{
  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;
  std::cout << "Enter another numner: ";
  int y;
  std::cin >> y;

  int z{x + y};
  std::cout << "The sum of " << x << " and " << y << " is " << z << '\n';
}
