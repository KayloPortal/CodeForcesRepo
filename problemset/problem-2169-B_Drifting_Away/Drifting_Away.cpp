#include <iostream>

using namespace std;

// The idea of the logic is simple, if we have any substring such as "**", ">*", "*<", "><", The answer would be -1,
// becasue we can stay in this to cells of the river forever moving. if the length of the cells is one, the answer is 1.
// and if none of the conditions above are right, then we should only have one '*' in the sequnce, and that star can't
// be neighbor to another star, can't have a neighbor > on the left or < on the right. Hence, if there's any *,
// The sequence would be something like this: "<<<*>>>>>", and if there's none, like this "<<<<>>>>". so if the count of
// > is r and < is l and * is star, the answer is star + max(l, r).

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    if (s.size() == 1){
      cout << 1 << "\n";
      continue;
    }
    bool found = false;
    int r = 0;
    int l = 0;
    int star = 0;
    for (int i = 0; i < s.size() - 1; i++)
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
        cout << -1 << "\n";
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
    cout << star + max(l, r) << "\n";
  }
  return 0;
}