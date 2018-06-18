#include <iomanip>
#include <iostream>
#include <map>
#include <string>

int main()
{
  std::map<std::string, int> counts{};

  // Read words from the standard input and count the number of times
  // each word occurs.
  std::string word{};
  while (std::cin >> word)
    ++counts[word];

  std::map<std::string, int>::iterator result{counts.find("the")};
  if (result == counts.end())
    std::cout << "'the' not found!\n";
  else
    std::cout << "Found " << result->second << " occurences of 'the'.\n";
}
