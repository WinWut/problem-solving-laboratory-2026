#include <iostream>
using namespace std;

int main(){
    int n,k,t;
    cin>>n>>k>>t;

    int pos=0;
    int count=1;

    while(true){
        pos=(pos+k)%n;
        if(pos==0){
            break;
        }
        count++;
        if(pos==t-1){
            break;
        }
    }

    cout<<count<<"\n";
    return 0;
}