#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for (char bit : s){
      if (bit == '0'){
        count++;
      }
    }
    cout << count << "\n";
    for (int i = 0; i < s.size(); i++){
      if(s[i] == '0') cout << i + 1 << " ";
    }
    cout << "\n";
  }
  return 0;
}