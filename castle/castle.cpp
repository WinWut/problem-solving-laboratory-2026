#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int r=1;
    while(r*r<x){
        r++;
    }

    int p = x-((r-1)*(r-1));

    int ans;
    if(p%2==1){
        ans=2*(r-1);
    }else{
        ans=2*r-3;
    }

    cout<<ans<<"\n";
    return 0;
}