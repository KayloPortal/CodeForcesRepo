// arr -> all combs -> find one with min diff arr sum -> lexographically compare -> output
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    // Getting Input
    int n;
    cin >> n;
    vector<int>arr;
    for (int j = 0; j < n; j++){
      int num = 0;
      cin >> num;
      arr.push_back(num);
    }

    // arr
    int lastNum = arr[arr.size() - 1];
    int firstNum = arr[0];
    int diff;
    if (firstNum != -1 && lastNum != -1){
      diff = abs(lastNum - firstNum);
    } else if (firstNum == -1 && lastNum != -1){
      firstNum = lastNum;
      diff = 0;
      // arr[0] = firstNum
    } else if (firstNum != -1 && lastNum == -1){
      lastNum = firstNum;
      diff = 0;
    } else {
      firstNum = lastNum = 0;
      diff = 0;
    }
    
    // cout
    arr[0] = firstNum;
    arr[arr.size() - 1] = lastNum;
    cout << diff << "\n";
    cout << arr[0] << " ";
    for (int index = 1; index < arr.size() - 1; index++){
      if (arr[index] == -1){
        cout << "0 ";
      } else {
        cout << arr[index] << " ";
      }
    }
    cout << arr[arr.size() - 1] << "\n";
  }
  return 0;
}