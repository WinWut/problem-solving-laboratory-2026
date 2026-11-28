#include <iostream>
using namespace std;
const int MAX_SIZE=1000005;
int h[MAX_SIZE];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            if(h[i]>h[i+1]){
                count++;
            }
        }else if(i==n-1){
            if(h[i]>h[i-1]){
                count++;
            }
        }else{
            if(h[i]>h[i-1] && h[i]>h[i+1]){
                count++;
            }
        }
    }

    cout<<count<<"\n";
    return 0;
}