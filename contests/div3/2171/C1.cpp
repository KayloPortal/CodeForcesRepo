#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // inputs
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int num;
    int a_1_c = 0;
    int b_1_c = 0;
    for (int j = 0; j < n; j++)
    {
      cin >> num;
      if (num == 1)
      {
        a_1_c++;
      }
      a.push_back(num);
    }
    for (int j = 0; j < n; j++)
    {
      cin >> num;
      if (num == 1)
      {
        b_1_c++;
      }
      b.push_back(num);
    }
    // a b
    if (a_1_c % 2 == b_1_c % 2)
    {
      cout << "Tie" << "\n";
      continue;
    }
    for (int index = n - 1; index > -1; index--)
      if (a[index] != b[index])
      {
        if ((index + 1) % 2 == 0)
        {
          cout << "Mai" << "\n";
        }
        else
        {
          cout << "Ajisai" << "\n";
        }
        break;
      }
  }

  return 0;
}