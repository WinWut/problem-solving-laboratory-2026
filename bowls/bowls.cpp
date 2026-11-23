#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* lst = new int[n]();
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        lst[x] += 1;
    }

    int maxn = lst[0];           // กำหนดค่าเริ่มต้นด้วยตัวแรกของ list
    for (int i = 0; i < n; ++i) {
        if (lst[i] > maxn) {     // ตรวจสอบว่าค่าปัจจุบันมากกว่า maxn ไหม
            maxn = lst[i];       // อัปเดตค่าเมื่อเจอเงื่อนไข
        }
    }
    cout<<maxn<<"\n";
    delete[] lst;
    return 0;
}