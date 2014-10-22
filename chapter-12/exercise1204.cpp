#include <iostream>
#include <iterator>
#include <vector>

int main()
{
  using namespace std;

  vector<int> data{};

  copy(
    istream_iterator<int>(cin),
    istream_iterator<int>(),
    back_inserter(data)
  );

  int n{};
  for (vector<int>::iterator i{data.begin()}, end{data.end()}; i != end && n == 0; ++i)
  {
    n = *i;
  }

  if (n == 0)
  {
    cout << "data is all zeros\n";
  }
  else
  {
    cout << "data is NOT all zeros\n";
  }
}
