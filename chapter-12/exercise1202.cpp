#include <iostream>

int main()
{
  using namespace std;

  bool x{};

  // Prompt for and print numeric output.
  cout << "Numeric:\n"
    "True: ";
  cin >> x;
  cout << "Result: " << x << '\n'
    << "False: ";
  cin >> x;
  cout << "Result: " << x << "\n\n";

  // Expect strings.
  cin >> boolalpha;
  cout << boolalpha;

  // Prompt for and print string output.
  cout << "Alpha:\n"
    "True: ";
  cin >> x;
  cout << "Result: " << x << '\n'
    << "False: ";
  cin >> x;
  cout << "Result: " << x << "\n\n";
}
