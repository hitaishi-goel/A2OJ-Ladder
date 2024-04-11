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
    int i=0;
    string res;
    while(i<s.size()){
        if(s[i]=='.'){
        res+='0';
        i++;
        }

        else if(s[i]=='-' && s[i+1]=='.'){res+='1';
        i+=2;}
        else if(s[i]=='-' && s[i+1]=='-'){res+='2';
        i+=2;}

       
    }
    for(auto x:res)cout<<(x-'0');
    return 0;
}