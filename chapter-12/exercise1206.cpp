#include <iostream>
#include <vector>

int main()
{
  using namespace std;

  string a{"string"}, b{"string"};

  if (a != b) cout << "a != b\n";
  if (a < b) cout << "a < b\n";
  if (a > b) cout << "a > b\n";
  if (a == b) cout << "a == b\n";
  if (a >= b) cout << "a >= b\n";
  if (a <= b) cout << "a <= b\n";

  a.push_back('s');
  if (a != b) cout << "a != b\n";
  if (a < b) cout << "a < b\n";
  if (a > b) cout << "a > b\n";
  if (a == b) cout << "a == b\n";
  if (a >= b) cout << "a >= b\n";
  if (a <= b) cout << "a <= b\n";

  b.push_back('g');
  if (a != b) cout << "a != b\n";
  if (a < b) cout << "a < b\n";
  if (a > b) cout << "a > b\n";
  if (a == b) cout << "a == b\n";
  if (a >= b) cout << "a >= b\n";
  if (a <= b) cout << "a <= b\n";
}
