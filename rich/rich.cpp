#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        int price;
        cin>>price;
        if(price>0){
            total+=price;
        }else{
            total+=0;
        }
    }
    cout<<total<<"\n";
}