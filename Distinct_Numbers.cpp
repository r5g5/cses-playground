#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <limits>
#include <iomanip>
#include <cassert>
#include <numeric>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; long long x;
    set<long long> s;
    cin >> n;
    while (n--) {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    return 0;
}