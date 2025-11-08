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
    long long n;
    cin >> n;
    cout << n << ' ';
    while (n != 1) {
        if (n & 1) {
            n = (n * 3) + 1;
        } else {
            n /= 2;
        }
        cout << n << ' ';
    }
    return 0;
}