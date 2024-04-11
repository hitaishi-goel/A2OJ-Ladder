#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define make_arr cin>>arr[i];
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
    int n,t;
    cin>>n>>t;
    string s(n,'0');
    for(int i=0;i<n;i++)cin>>s[i];
    while(t--){
        for(int i=0;i<n-1;){
            if(s[i]=='B' && s[i+1]=='G'){swap(s[i],s[i+1]);
            i+=2;
            }
            else i++;
        }
    }
    for(int i=0;i<n;i++)cout<<s[i];
    return 0;
} 