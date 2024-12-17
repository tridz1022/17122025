#include <bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std;
int a[N],n;
ll dp[N],maxx=-2e9;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=3; i<=n+2; i++) cin>>a[i];
    for(int i=3; i<=n+2; i++)
    {
        ll val=a[i] + a[i-1] + a[i-2];
        dp[i]= max(val, dp[i-3]+val);
        maxx=max(maxx,dp[i]);
    }
    cout<<maxx;
    return 0;
}