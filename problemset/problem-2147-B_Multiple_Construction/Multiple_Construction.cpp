#include <iostream>

using namespace std;

// First vision:
// To make the final array, we construct an array named first_arr, then we merge it to the previous one.
// if the given number is n, the final array would look like this: [...first_arr, 1, 2, 3, ... , n - 2, n - 1, n]
// in the second array(which is the second part of the final array), for each number with the form n - a, a > 0,
// its position is 2n - a, (assuming positions start from 1, not 0)
// we define the second position of the position of that number by substracting itself from its current position: 
// new_pos = current_pos - number <=> new_pos = (2n - a) - 2 * (n - a) = a
// This means the difference of the two positions for each number is the double of the number, hence its divisable 
// by the number. now, if we prove that for each number we get a unique second position, we can say this is a right 
// solution. to do that, lets define the function f which generates the second position a given number:
// f(n - a) = (2n - a) - 2 * (n - a) = a => assume t = n - a: f(t) = n - t
// it's obvious taht f is one to one. so for every number n - a, 0 < a < n, it gives us a unique answer which is less than
// n, so we can fill the positions from 1 to n - 1 in the final array, and we give the remaining position n to the number n
// and the final array meets the conditions.

// Second Vision:
// this vision gives us the same answer as the previous one but in a different vision. let's assume the final array
// has the positions starting from one to 2n. lets put the number n at the position n. so we have n - 1 number of empty
// positions on both left and right. now for each number a, get a distance of a from the position n, and put the number there.
// for instance, for the number 1, put it on positions n-1 and n+1, for the number 2, put them at positions n-2 and n+2,
// we can do it for all remaining numbers, and it's obvious that the distance of each two identical numbers is dividable by
// that number, because it's twice of its magnitude. (for the number a, we put them at positions n-a and n+a so the difference
// is 2a which is a multiple of a). and we put the number n at positions n and 2n, and the final array is completed and
// meets the required conditions.

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i = n - 1; i > 0; i--) cout << i << " ";
    cout << n << " ";
    for(int i = 1; i <= n; i++) cout << i << " ";
    cout << "\n";
  }
  return 0;
}