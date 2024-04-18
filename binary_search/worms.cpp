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
    // 2 7 3 4 9
    // 2 9 12 16 25
    vector<int> v(n);
    vector<int> v1(n);
    int sum=0;
    for(int i=0;i<n;i++){
       
        cin>> v[i];
        //cout<<v[i]<<" ";
        
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        sum+=v[i];
        v1[i]=sum;
        //cout<<v1[i]<<" ";
        
    }
    //cout<<endl;
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        int i = lower_bound(v1.begin(),v1.end(),y)-v1.begin()+1;
        cout<<i<<endl;

    }
    return 0;
}