#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
   
    string s;
    cin>>s;
    int n = s.size();
    multiset<int>s1;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        a[i] = s[i] - '0';
    }
    int p1 = a[n-1];
    s1.insert(p1);
    for(int i = n-2;i>=0;i--)
    {
        if(a[i]>p1)
        {
            s1.insert(min(a[i]+1,9));

        }
        else
        {
            s1.insert(a[i]);
            p1 = a[i];
        }
    }
    for(auto pr : s1)
    {
        cout<<pr;
    }
    cout<<endl;
}
return 0;
}