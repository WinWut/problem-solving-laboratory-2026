#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> nxt(n + 1);
    for (int i = 1; i <= n; ++i) cin >> nxt[i];
    
    vector<bool> visited(n + 1, false);
    int best = 0;
    
    for (int i = 1; i <= n; ++i) {
        int length = 0;
        if (visited[i] == false) {
            int j = i;
            while (visited[j] == false) {
                visited[j] = true;
                j = nxt[j];
                length += 1;
            }
        }
        if (length > best) {
            best = length;
        }
    }
    
    cout << best << "\n";
    return 0;
}