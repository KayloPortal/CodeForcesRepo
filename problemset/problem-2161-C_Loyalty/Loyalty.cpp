#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#define ll long long int

using namespace std;

int main(){
  int t;
  cin >> t;
  for(int index = 0; index < t; index ++){
    ll n;
    cin >> n;
    ll X;
    cin >> X;
    vector<ll> prices;
    for(int i = 0; i < n; i++){
      ll price;
      cin >> price;
      prices.push_back(price);
    }
    sort(prices.begin(), prices.end());

    // We have prices sorted, n, X
    ll points = 0;
    vector<ll> order;
    ll sum = 0;
    while(prices.size() > 0){
      ll last = prices[prices.size() - 1];
      sum += last;
      prices.pop_back();
      while (sum < X && prices.size() > 0){
        order.push_back(prices[0]);
        sum += prices[0];
        prices.erase(prices.begin());
      }
      if (sum >= X) points += last;
      sum -= X;
      order.push_back(last);
    }
    cout << points << "\n";
    for(auto num : order){
      cout << num << " ";
    }
    cout << "\n";
  }
  return 0;
}