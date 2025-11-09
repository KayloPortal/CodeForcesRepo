#include <iostream>

using namespace std;

int main()
{
  string pos;
  cin >> pos;
  int teamOne = 0;
  int teamTwo = 0;
  bool isDangerous = false;
  for (int i = 0; i < pos.length(); i++)
  {
    if (pos[i] == '0')
    {
      teamOne++;
      teamTwo = 0;
    }
    else
    {
      teamTwo++;
      teamOne = 0;
    }
    if (teamOne == 7 || teamTwo == 7)
    {
      isDangerous = true;
      break;
    }
  }
  if (isDangerous)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}