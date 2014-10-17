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

  cout << "\nOutput:\n";
  for (vector<int>::iterator i{data.end()}, start{data.begin()}; i != start; )
  {
    --i;
    cout << *i << '\n';
  }
}
