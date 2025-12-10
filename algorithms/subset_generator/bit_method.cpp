#include <iostream>
#include <bitset>
#include <vector>
#include <string>

using namespace std;

string toBin(int num, int len){
  string out;
  while(num > 0){
    out = to_string(num % 2) + out;
    num /= 2;
  }
  while(out.size() < len) out = "0" + out;
  return out;
}

int main(){
  vector<string> set;
  int t;
  cin >> t;
  while(t--){
    string element;
    cin >> element;
    set.push_back(element);
  }
  int n = set.size();
  for (int k = 0; k < (1 << n); k++){
    string bitstr = toBin(k, n);
    cout << k + 1 << ": { ";
    for (int i = 0; i < n; i++){
      if (bitstr[i] == '1') cout << set[i] << ", ";
    }
    cout << "}" << "\n";
  }
  return 0;
}