#include <string>
#include <iostream>
using namespace std;
// ...
int main(){
    string w;
    cin >> w;
    int x=0,y=0;
    for (char i : w) {
        if(i=='N'){
            y++;
        }
        if(i=='S'){
            y--;
        }
        if(i=='W'){
            x--;
        }
        if(i=='E'){
            x++;
        }
        if(i=='Z'){
            x=0;
            y=0;
        }
    }
    cout<<x<<" "<<y<<"\n";
    return 0;
}