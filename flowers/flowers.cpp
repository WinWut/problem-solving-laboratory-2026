#include <iostream>
using namespace std;

int main(){
    int l,n;
    cin>>l>>n;
    int k=1;
    while(true){
        int m=k*l;
        int total=m*(m+1)/2;
        if(total>=n){
            cout<<k<<"\n";
            break;
        }
        else{
            k++;
        }
    }
    return 0;
}