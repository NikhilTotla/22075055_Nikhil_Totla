#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    int n;
    cin>>n;
    int a[n];
    int b[n+1];
   
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    
    }
     b[0] = a[0];
     for(int i = 1;i<n;i++)
    {
        
        b[i] = (a[i]*a[i-1])/__gcd(a[i],a[i-1]);
    
    }

    b[n] = a[n-1];
    
    if(n>=3)
    {
        int check = 0;
        for(int i = 1;i<=n;i++)
        {
            if(__gcd(b[i],b[i-1]) != a[i-1])
            {
                check = 1;
                break;

            }
        }
        if(check == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    else
    {
        cout<<"YES\n";
    }
}

return 0;
}