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
    int n; cin >> n;
    vector<bool> visited(n+1, false);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        visited[x] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}