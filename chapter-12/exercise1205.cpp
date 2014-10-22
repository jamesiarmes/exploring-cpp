#include <iostream>
#include <vector>

int main()
{
  using namespace std;

  vector<int> a{1, 2, 3}, b{1, 2, 3};

  if (a == b) { cout << "a = b\n"; }
  if (a != b) { cout << "a != b\n"; }
  if (a < b) { cout << "a < b\n"; }
  if (a > b) { cout << "a > b\n"; }
  if (a <= b) { cout << "a <= b\n"; }
  if (a >= b) { cout << "a >= b\n"; }
}
