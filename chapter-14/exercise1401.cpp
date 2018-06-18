#include <cstdio>
#include <fstream>
#include <iostream>

int main()
{
  std::ifstream in{"list1402.in"};
  std::ofstream out{"list1402.out"};

  if (not in)
    std::perror("list1402.in");
  else if (not out)
    std::perror("list1402.out");
  else
  {
    int x{};
    while (in >> x)
      out << x << '\n';
    in.close();
    out.close();
  }
}