#include <iomanip>
#include <iostream>

int main()
{
  std::cout << " N   N^2    N^3\n";
  for (int i{1}; i != 21; ++i)
  {
    if (i < 10) {std::cout << ' ';}
    std::cout << i << "   ";

    int square{i * i};
    if (square < 100) {std::cout << ' ';}
    if (square < 10) {std::cout << ' ';}
    std::cout << square << "   ";

    int cube{square * i};
    if (cube < 1000) {std::cout << ' ';}
    if (cube < 100) {std::cout << ' ';}
    if (cube < 10) {std::cout << ' ';}
    std::cout << cube << '\n';
  }
}
