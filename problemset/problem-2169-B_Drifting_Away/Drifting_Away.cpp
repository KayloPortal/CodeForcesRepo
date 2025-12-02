#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (s.size() == 1){
      cout << "o " << 1 << "\n";
      continue;
    }
    bool found = false;
    int r = 0;
    int l = 0;
    int star = 0;
    for (int i = 0; i < s.size(); i++)
    {
      switch (s[i])
      {
      case ('*'):
        star++;
        break;
      case ('>'):
        r++;
        break;
      case ('<'):
        l++;
        break;
      }
      if ((s[i] == '*' && s[i + 1] == '*') || (s[i] == '>' && s[i + 1] == '<') || (s[i] == '*' && s[i + 1] == '<') || (s[i] == '>' && s[i + 1] == '*'))
      {
        cout << "o " << -1 << "\n";
        found = true;
        break;
      }
    }
    switch (s[s.size() - 1])
      {
      case ('*'):
        star++;
        break;
      case ('>'):
        r++;
        break;
      case ('<'):
        l++;
        break;
      }
    
    if (found)
      continue;
    cout << "o " << star + max(l, r) << "\n";
  }
  return 0;
}