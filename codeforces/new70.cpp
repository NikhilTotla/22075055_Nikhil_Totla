#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
int T;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>T;
while(T--)
{
    ll n; cin>>n;
    ll a[63];
    log10()
}
return 0;
}