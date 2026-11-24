#include <iostream>
#include <list>
using namespace std;

// ปรับ return type ให้ตรงกับ return resultx;
list<int> firstStep(const list<int>& lst, int n) {
    list<int> resultx;
    int prev;
    bool isFirst = true;

    // ใช้ iterator แทนการใช้ i++ และ lst[i]
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (isFirst) {          // เทียบเท่า i == 0
            if (*it < n) resultx.push_back(0);
            else if (*it > n) resultx.push_back(1);
            prev = *it;
            isFirst = false;
        } else {
            if (*it > prev) resultx.push_back(1);
            else if (*it < prev) resultx.push_back(0);
            prev = *it;
        }
    }
    return resultx;
}

list<int> secondStep(const list<int>& lst, int n) {
    list<int> resulty;
    int prev;
    bool isFirst = true;

    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (isFirst) {
            resulty.push_back(*it);      // add lst[i] to resulty
            prev = *it;                  // prev = lst[i]
            isFirst = false;
        } else {
            if (*it > prev) {
                resulty.push_back(*it - 2 * resulty.back()); // resulty[i-1] ใช้ back()
            } else if (*it < prev) {
                resulty.push_back(*it - resulty.back());
            }
            prev = *it;
        }
    }
    return resulty;
}

int main() {
    int n, t; 
    cin >> n >> t;
    list<int> arr;
    list<int> result;
    for (int i = 0; i < n; i++) {
        int tmp; 
        cin >> tmp; 
        arr.push_back(tmp);
    }
    if(t==1){
        result = firstStep(arr, n); // รับค่ากลับ
    }
    else if(t==2){
        list<int> temp= secondStep(arr,n);
        result=firstStep(arr,n);
    }
    
    // แปลง pseudocode: for i in result: print(result[i])
    // std::list ไม่รองรับ operator[] จึงใช้ range-for loop แทน
    for (int val : result) {
        cout << val << "\n";
    }
    
    return 0;
}