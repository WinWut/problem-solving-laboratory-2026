#include <iostream>
using namespace std;

int main(){
    int w,h,m,n;
    cin>>w>>h>>m>>n;
    int wd[1005];
    int ht[1005];

    int prev=0;
    for(int i=0;i<m;i++){
        int v;
        cin>>v;
        wd[i]=v-prev;
        prev=v;
    }
    wd[m]=w-prev;

    prev=0;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        ht[i]=v-prev;
        prev=v;
    }
    ht[n]=h-prev;

    int first=0,second=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            int area=wd[i]*ht[j];

            if(area>first){
                second=first;
                first=area;
            }else if(area>second){
                second=area;
            }
        }
    }

    cout<<first<<" "<<second<<"\n";

    
    return 0;
}