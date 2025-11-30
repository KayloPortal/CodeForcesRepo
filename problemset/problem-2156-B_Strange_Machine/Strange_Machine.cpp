#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
    int n, q;
    cin >> n;
    cin >> q;
    string machines;
    cin >> machines;
    while (q--){
      int number;
      cin >> number;
      int total = 0;
      int index = 0;
      while (number != 0){
        if (machines[index] == 'A'){
          number--;
        } else {
          number /= 2;;
        }
        index++;
        total++;
        if (index == machines.size()){
          index = 0;
        }
      }
      cout << total << "\n";
    }
  }
  return 0;
}