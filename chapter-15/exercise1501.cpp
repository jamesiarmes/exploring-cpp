#include <iomanip>
#include <iostream>
#include <map>
#include <string>

int main()
{
  std::map<std::string, int> counts{};
  std::string word{};
  while (std::cin >> word)
    ++counts[word];

  int colwidthword{}, maxcount{};
  for (auto element : counts)
  {
    std::string::size_type wordlength{element.first.size()};
    if (wordlength > colwidthword)
      colwidthword = wordlength;

    if (element.second > maxcount)
      maxcount = element.second;
  }

  // For each word/count pair...
  std::string::size_type colwidthcount{std::to_string(maxcount).size() + 2};
  for (auto element : counts)
    // Print the word, tab, the count, newline.
    std::cout << std::left << std::setw(colwidthword) << element.first
      << std::right << std::setw(colwidthcount) << element.second << '\n';
}
