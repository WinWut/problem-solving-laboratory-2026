#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int arr[301] = {};

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr[x] += 1;
    }
    cout<<arr[300]<<"\n";
    int maxn = arr[0];           // กำหนดค่าเริ่มต้นด้วยตัวแรกของ list
    for (int i = 0; i <= 300; ++i) {
        if (arr[i] > maxn) {     // ตรวจสอบว่าค่าปัจจุบันมากกว่า maxn ไหม
            maxn = arr[i];       // อัปเดตค่าเมื่อเจอเงื่อนไข
        }
    }
    cout<<maxn<<"\n";
    return 0;
}