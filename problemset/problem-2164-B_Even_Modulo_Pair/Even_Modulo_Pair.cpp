#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> seq;
    int evenCount = 0;
    int evenIndex1 = -1;
    int evenIndex2 = -1;
    for (int index = 0; index < n; index++)
    {
      int num;
      cin >> num;
      if (num % 2 == 0)
      {
        if (evenCount == 0)
          evenIndex1 = index;
        else if (evenCount == 1)
          evenIndex2 = index;
        evenCount++;
      }
      seq.push_back(num);
    }
    if (evenCount == 2)
    {
      cout << seq[evenIndex1] << " " << seq[evenIndex2] << "\n";
      continue;
    }
    bool isFound = false;
    for (int i = seq.size() - 1; i > -1; i--){
      for (int j = i - 1; j > -1; j--){
        if ((seq[i] % seq[j]) % 2 == 0) {
          isFound = true;
          cout << seq[j] << " " << seq[i] << "\n";
          break;
        }
      }
      if (isFound) break;
    }
    if (!isFound) cout << "-1" << "\n";
  }
  return 0;
}