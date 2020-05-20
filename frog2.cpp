//Author : Vipul Sharma

// LIBRARIES
#include <bits/stdc++.h>

// MACROS
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; i++)
#define rev(i,b,a) for(i=b-1;i>=a;i--)
#define s1rep(i,a,b) for( i=1;i<=b;i++)
#define itrep(at) for (auto it = at.begin(); it != at.end(); it++)
#define ld long double
#define pb push_back
#define w(t) while (t--)
#define booster                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define deb1(x) cout << #x << " : " << x << endl;
#define deb2(x, y) cout << #x << " : " << x << "\t" << #y << " : " << y << endl;
#define deb3(x, y, z) cout << #x << " : " << x << "\t" << #y << " : " << y << "\t" << #z << " : " << z << endl;
#define deb4(x, y, z, w) cout << #x << " : " << x << "\t" << #y << " : " << y << "\t" << #z << " : " << z << "\t" << #w << " : " << w << endl;
#define deb5(a, b, c, d, e) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define deb6(a, b, c, d, e, f) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

using namespace std;
long long cost = 1e18;
// FUNCTIONS
ll power(ll a, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res *= a;
            n--;
        }
        else
        {
            a *= a;
            n >>= 1;
        }
    }
    return res;
}













ll dp[100001];

ll solve(ll a[],ll n,ll k)
{
    ll dp[n],i;
    rep(i,0,n) dp[i]=INT_MAX;
    dp[0]=0;
    for( i=0;i<n;i++)
    {
        for(ll j=i+1;j<=i+k;j++)
        {
            if(j<n)
                dp[j]=min(dp[j],dp[i]+abs(a[i]-a[j]));
            
        }
    }
    return dp[n-1];
}



int main()
{
    booster;
    ll n,i,k;
    cin>>n>>k;
    ll a[n];
    rep(i,0,n) cin>>a[i];
    cout<<solve(a,n,k)<<endl;
    return 0;

}
