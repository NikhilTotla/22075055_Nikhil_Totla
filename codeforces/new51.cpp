#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>T;
while(T--)
{
    string s;
    cin>>s;
    if(s[0] == '0')
    {
        cout<<0<<endl;
    }
    else
    {
        ll k = 1;
        for(int i = 0;i<s.size();i++)
        {if(i == 0 && s[i] == '?')
        {
            k = k*9;
        }
        else if(s[i] == '?' && i != 0)
        {
            k = k*10;
        }
        }
        cout<<k<<endl;
    }
}
return 0;
}