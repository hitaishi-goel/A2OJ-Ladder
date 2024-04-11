#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define mod 1000000007

void solve()
{
    // code here
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> v(3,vector<int>(3,0));
    vector<vector<bool>> ans(3,vector<bool>(3,1));
    
        for(int i=0;i<3;i++){
            cin>>v[i][0]>>v[i][1]>>v[i][2];
        }

        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(v[i][j]%2!=0){
                    ans[i][j]= !ans[i][j];
                    for(int k=0;k<4;k++){
                        int nr = dr[k]+i;
                        int nc = dc[k]+j;
                        if(nr<3 &&  nc<3 && nr>=0 && nc>=0){
                             ans[nr][nc]= !ans[nr][nc];
                        }
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            string s;
            for(int j=0;j<3;j++){
                s+=ans[i][j]+'0';
            }
            cout<<s<<endl;
        }


    
    return 0;
}