#include <iostream>
#include <map>
#include <string>

int main()
{
  std::map<std::string, int> counts{};
  std::string word{};
  while (std::cin >> word)
    ++counts[word];

  // For each word/count pair...
  for (auto element : counts)
    // Print the word, tab, the count, newline.
    std::cout << element.first << '\t' << element.second << '\n';
}
