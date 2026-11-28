#include <iostream>
using namespace std;

int main(){
    int n;
    int a[305];
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                count++;
            }
        }
    }
    cout<<count<<"\n";
}