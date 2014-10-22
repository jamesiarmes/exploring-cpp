#include <iostream>
#include <vector>

int main()
{
  std::vector<int> data{};

  if (data)
    std::cout << "data is true\n";
  else
    std:: cout << "data is false\n";
}
