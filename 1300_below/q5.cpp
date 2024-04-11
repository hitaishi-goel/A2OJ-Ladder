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
    int n;
    cin>>n;
    int y=n;

    n++;
    int ans;
    while(1){
        int y=n;
        bool check=1;
        unordered_set<int> s;
       while(y){
        int x = y%10;
        y/=10;
       if(s.find(x)!=s.end()){
        check=0;
       break;
       }
       else s.insert(x);
      }
    if(check){ans=n;
    break;}
    n++;
    }
    cout<<ans;
    return 0;
}