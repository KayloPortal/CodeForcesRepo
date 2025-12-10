#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, a;
    cin >> n >> a;
    int negative = 0;
    int positive = 0;
    for (int i = 0; i < n; i++){
      int num;
      cin >> num;
      if (num - a > 0) positive++;
      else if (num - a < 0) negative++;
    }
    int ans;
    if (positive > negative) ans = a + 1;
    else ans = a - 1;
    cout << ans << "\n";
  }
  return 0;
}