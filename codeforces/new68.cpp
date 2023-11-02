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
    int n,m;
    cin>>n>>m;
    vector<string>v;
    int a[n][m];
    for(int i = 0;i<n;i++)
    {
        string s1;
        cin>>s1;
        v.push_back(s1);
    }
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            
            if(v[i][j] == '0')
            {
                sum++;
            }
            a[i][j] = (v[i][j] == '1');
            // cout<<a[i][j];
        }
        // cout<<endl;
    }
    // cout<<sum<<endl;
    int check = 1;
    // cout<<a[0][0]<<a[1][1];
    for(int i = 0;i<n-1;i++)
    {
        
        for(int j = 0;j<m-1;j++)
        {
            
            if(a[i][j] == 0)
            {
                // cout<<8<<endl;
                
               
            
                if(a[i+1][j+1] == 0)
                 {check = 0;
                break;}
             
            
                else if(a[i+1][j] == 0)
                 {check = 0;
                break;}
               
                else if(a[i][j+1] == 0)
                 {check = 0;
                break;}
           

                
            }
        
        }
        if(check == 0)
        {
            sum--;
            break;
        }}
        cout<<sum<<endl;
        if(check == 1)
        {for(int i =0;i<n-1;i++)
        {
            if(a[i][m-1] == 0 && a[i+1][m-1] == 0)
            {
                check = 0;
                break;
            }
        }
        for(int i = 0;i<m-1;i++)
        {
            if(a[n-1][i] == 0 && a[n-1][i+1] == 0)
            {
                check = 0;
                break;
            }
        }}
        if(check == 0)
        {
            sum--;
            break;
        }
        
        cout<<sum<<endl;
    
    
    // cout<<check;
    cout<<sum<<endl;
    
    //  cout<<sum<<endl;
    if(sum>= 1)
    {
        sum--;
    }
    else
    {
        sum = 0;
    }
   
    cout<<max(m*n - sum -2,0)<<endl;
    
}
return 0;
}