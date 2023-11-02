#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    int q;
    cin>>q;
    vector<int>v[q];
    vector<int>ans;
    ll h1 = 0,h2 = 0;
    for(int i = 0;i<q;i++)
    {
        int x1;
        cin>>x1;
    
        if(x1 == 1)
        {
            // for(int j = 0;j<3;j++)
            {
                int a,b,n;
                cin>>a>>b>>n;
                ll k1;
                if(n == 1)
                {
                   k1 = 1;
                }
                else

              {  k1 = (a-b)*(n-2) + a+1;}
                ll k2 = (a-b)*(n-1) + a;
                // cout<<k1<<" "<<k2<<endl;
                if(h1 == 0 && h2 == 0)
                {
                    h1 = k1;
                    h2 = k2;
                    ans.push_back(1);
                }
                else
                {
                    if(h1<=k1 && h2>=k2)
                    {
                        h1 = k1;
                        h2 = k2;
                        ans.push_back(1);
                    }
                    else if(h2<k2 && k1<=h2 && k1>=h1)
                    {
                        h1 = k1;
                        ans.push_back(1);
                    }
                    else if(k1<h1 && k2>=h1 && k2<=h2)
                    {
                        h2 = k2;
                        ans.push_back(1);
                    }
                    else
                    {
                        ans.push_back(0);
                    }
                }
             
              
            
            }
        }
        else
        {
            int a,b;
            cin>>a>>b;
            if(h1 == 0 && h2 == 0)
            {
                ans.push_back(-1);
                continue;
            }
            if(h1 >= a+1)
            {ll n = 2 + (h1 - 1- a)/(a-b);
            // cout<<n<<endl;
            if(a+(a-b)*(n-1)>=h2)
            {
                ans.push_back(n);
            }
            else
            {
                ans.push_back(-1);
            }}
            else
            {
                if(h2<=a)
                {
                    ans.push_back(1);
                }
                else

                {
                    ans.push_back(-1);
                }
            }
        }
    }
    for(auto pr : ans)
    {
        cout<<pr<<" ";
    }
    cout<<endl;

}
return 0;
}