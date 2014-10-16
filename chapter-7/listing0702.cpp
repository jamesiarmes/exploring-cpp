#include <iostream>

int main()
{
  for (int i{0}; i != 10; i = i + 1)
  {
    std::cout << i << '\n';
  }

  std::cout << "i=" << i << '\n'; // error: i is undefined outside the loop.
}
