//  Missing Coin Sum

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   long long n;
   cin >> n;
   vector<long long> v(n);
   for (auto& i : v) {
        cin >> i;
   }
   sort(v.begin(), v.end());
   auto res = 0ULL;
   for (auto i = 0; i < n; i++) {
        if (v[i] <= res + 1) {
             res += v[i];
        } else break;
   }
   cout << res + 1 << endl;
   return 0;
}
