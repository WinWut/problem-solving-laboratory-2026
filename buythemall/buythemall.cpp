#include <iostream>
using namespace std;

int main(){
    int p1,p2,p3;
    int n;

    cin>>p1>>p2>>p3;
    cin>>n;
    
    int items[1005];
    for(int i=0;i<n;i++){
        cin>>items[i];
    }

    int itemCount[3]={0};
    for(int i=0;i<n;i++){
        if(items[i]==1){
            itemCount[0]+=p1;
        }
        if(items[i]==2){
            itemCount[1]+=p2;
        }
        if(items[i]==3){
            itemCount[2]+=p3;
        }
    }

    int min=itemCount[0];
    for(int i=1;i<3;i++){
        if(itemCount[i]<min){
            min=itemCount[i];
        }
    }

    cout<<min<<"\n";
    return 0;
}