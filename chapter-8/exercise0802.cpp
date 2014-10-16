#include <iomanip>
#include <iostream>

int main()
{
  using namespace std;

  cout << setw(5) << "*|"
    << setw(4) << 1
    << setw(4) << 2
    << setw(4) << 3
    << setw(4) << 4
    << setw(4) << 5
    << setw(4) << 6
    << setw(4) << 7
    << setw(4) << 8
    << setw(4) << 9
    << setw(4) << 10 << '\n';

  cout << "----+" << setfill('-') << setw(41) << '\n';

  for (int i{1}; i <= 10; ++i)
  {
    cout << setfill(' ') << setw(4) << i << '|';
    for (int j{1}; j <= 10; ++j)
    {
      cout << setw(4) << (i * j);
    }

    cout << '\n';
  }
}
