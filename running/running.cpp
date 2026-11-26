#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> s(n);
    long long m = 2e18;
    for (auto &x : s) {
        cin >> x;
        m = min(m, x);
    }

    int count = 0;
    for (long long x : s) {
        if (x * (k - 1) < k * m) count++;  // ไม่ถูกแซง
    }

    cout << count << "\n";
    return 0;
}