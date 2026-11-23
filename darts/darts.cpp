#include <iostream>
using namespace std;
int dartpoint(int x,int y){
    int d;
    int points=0;
    d=x*x+y*y;
    if(d<=4){
        points+=5;
    }else if(d<=16){
        points+=4;
    }else if(d<=36){
        points+=3;
    }else if(d<=64){
        points+=2;
    }else if(d<=100){
        points+=1;
    }else{
        points+=0;
    }
    return points;
}
int main(){
    int n;
    int x,y;
    int total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        total+=dartpoint(x,y);
    }
    cout<<total<<"\n";
}