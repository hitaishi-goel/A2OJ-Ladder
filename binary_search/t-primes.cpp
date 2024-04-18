#include <iostream>
#include <cmath>
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



bool solve2(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
long long solve(long long n)
{
    if (n <= 1) return 0;
    long long l=0,r=n;
    while(l<=r){
        long long mid = l+(r-l)/2;
        if(mid*mid==n)return mid;
        else if(mid*mid<n)l=mid+1;
        else r=mid-1;
    }

    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        if(solve(x)!=0){
            long long val=solve(x);
            if(solve2(val))cout<<"YES"<<endl;
             else cout<<"NO"<<endl; 
        }
        else cout<<"NO"<<endl;
       
    }
    return 0;
}
    