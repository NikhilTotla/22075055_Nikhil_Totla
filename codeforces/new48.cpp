#include<iostream>
using namespace std;

const int N = 2e5 + 10;
int parent[N];
int a[N];

void find (int r,int i){
    if(a[r] == i)
    {
        parent[i] = i;
        parent[r] = i;
    }
    else
    {
        parent[i] = i;
        parent[r] = i;
        find(a[r],i);
    }
}



int main()
{
int T;
cin>>T;
while(T--)
{
    int n;
    cin>>n;
   int count[n+1];

   


   for(int i = 1;i<=n;i++)
   {
    cin>>a[i];
    parent[i]=0;
    count[i]=0;
   }

   for(int i=1;i<=n;i++){
    if(parent[i]==0){
        find(a[i],i);
    }
   }
//    for(int i = 1;i<=n;i++)
//    {
//     cout<<parent[i]<<endl;
//    }

   for(int i=1; i<=n;i++){
    count[parent[a[i]]]++;
   }

   
   for(int i=1;i<=n;i++){
     cout<<count[parent[a[i]]]<<" ";
   }

   cout<<endl;


}
return 0;
}