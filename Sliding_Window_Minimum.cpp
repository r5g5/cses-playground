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


class Solution {
    deque<long long> _d;
    long long _ans = 0;
public:
    Solution() = default;
    
    void insert(const long long val) {
        while (!_d.empty() && _d.back() > val) {
            _d.pop_back();
        }
        _d.push_back(val);
    }

    void remove(const long long val) {
        if (!_d.empty() && _d.front() == val) {
            _d.pop_front();
        }
    }

    inline void find() {
        _ans ^= _d.front();
    }

    void print() const {
        std::cout << _ans << std::endl;
    }

    ~Solution() {
        _d.clear();
        _ans = 0;
    }
};

int main() {
    list<long long> ce;
    long long n, k, x, a, b, c;
    cin >> n >> k >> x >> a >> b >> c;

    Solution s;
    s.insert(x);
    
    ce.push_front(x);
    long prev = x;

    for (long long i = 2; i <= k; i++) {
        long long v = ((a * prev) + b) % c;
        prev = v;
        ce.push_back(v);
        s.insert(v);
    }

    s.find();

    for (long long i = k + 1; i <= n; i++) {
        long long lastValue = ce.front(); 
        ce.pop_front();
        s.remove(lastValue);


        long long newValue = ((a * prev) + b) % c;
        ce.push_back(newValue);
        s.insert(newValue);

        s.find();

        prev = newValue;
    }
    
    s.print();
    return 0;
}