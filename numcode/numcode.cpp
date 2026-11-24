#include <iostream>
#include <list>
using namespace std;

list<int> firstStep(const list<int>& lst, int n) {
    list<int> resultx;
    int prev = n;                       // ตัวแรกเทียบกับ N
    for (int v : lst) {
        resultx.push_back(v > prev ? 1 : 0);
        prev = v;
    }
    return resultx;
}

// Z -> Y
list<int> secondStep(const list<int>& lst) {
    list<int> resulty;
    bool isFirst = true;
    for (int z : lst) {
        if (isFirst) {
            resulty.push_back(z);       // Y1 = Z1
            isFirst = false;
        } else {
            int y = resulty.back();
            if (z == 2 * y - 1) resulty.push_back(y - 1);
            else                resulty.push_back(y + 1);
        }
    }
    return resulty;
}

int main() {
    int n, t;
    cin >> n >> t;
    list<int> arr;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    list<int> result;
    if (t == 1) {
        result = firstStep(arr, n);
    } else {
        list<int> y = secondStep(arr);
        result = firstStep(y, n);
    }

    for (int val : result) cout << val << "\n";
    return 0;
}