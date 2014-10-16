#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
  using namespace std;

  vector<int> data{};

  // Read the integers from the input.
  copy(
    istream_iterator<int>(std::cin),
    istream_iterator<int>(),
    back_inserter(data)
  );

  if (data.empty())
  {
    cout << "No integers entered!\n";
  }
  else
  {
    // Determine the column width.
    int const max{*max_element(data.begin(), data.end())};
    long unsigned int const numcolwidtrh(to_string(max).length() + 3);
    long unsigned int const dblcolwidtrh(to_string(max * 2).length() + 3);
    long unsigned int const sqrcolwidth{to_string((max * max)).length() + 3};

    // Print the header.
    cout << setw(numcolwidtrh) << 'N'
      << setw(dblcolwidtrh) << "N*N"
      << setw(sqrcolwidth) << "N^N" << '\n';

    // Iterate over the values, printing each row,
    for (int element : data)
    {
      cout << setw(numcolwidtrh) << element
        << setw(dblcolwidtrh) << element * 2
        << setw(sqrcolwidth) << element * element << '\n';
    }
  }
}
