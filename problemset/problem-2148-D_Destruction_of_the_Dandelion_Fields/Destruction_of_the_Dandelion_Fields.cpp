#include <iostream>
#include <vector>
#include <algorithm>
// odd[-1] ...Even s_odd, b_odd, 
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
        while (t--){
            int n;
            cin >> n;
            vector<ll> odd_dands;
            ll even_sum = 0;
            int odd_count = 0;
            for(int i = 0; i < n; i++){
                ll a;
                cin >> a;
                if (a % 2 == 0) even_sum += a;
                else {
                    odd_count += 1;
                    odd_dands.push_back(a);
                }
        }
        if (odd_count == 0){
            cout << 0 << "\n";
            continue;
        } else if (odd_count == 1){
            even_sum += odd_dands[0];
            cout << even_sum << "\n";
            continue;
        }
        sort(odd_dands.rbegin(), odd_dands.rend());
        int possible = (odd_count - 1) / 2;
        for (int i = 0; i < possible + 1; i++){
            even_sum += odd_dands[i];
        }
        cout << even_sum << "\n";
    }
    return 0;
}