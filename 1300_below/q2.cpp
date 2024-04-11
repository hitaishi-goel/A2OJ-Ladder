#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v(5,vector<int>(5,0));
    int a,b;
    for(int i=0;i<5;i++){
       
       cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3]>>v[i][4];
       if(v[i][0]==1){
        a=i;
        b=0;
       }
       else if(v[i][1]==1){
        a=i;
        b=1;
       }
       else if(v[i][2]==1){
        a=i;
        b=2;
       }
       else if(v[i][3]==1){
        a=i;
        b=3;
       }
       else if(v[i][4]==1){
        a=i;
        b=4;
       }
      
    }

    int val = abs(2-a)+abs(2-b);
    cout<<val;


    return 0;
}