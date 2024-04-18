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
    string s;
    cin>>s;
    int u=0,l=0;
    for(auto x:s){
        if(x<=90)u++;
        else if(x>=97)l++;
    }

    if(u>l){
        for(int i=0;i<s.size();i++){
            char x = s[i];
            if(x>=97)s[i]=toupper(s[i]);
        }
    }
     else{
        for(int i=0;i<s.size();i++){
            char x = s[i];
            if(x<=90)s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}