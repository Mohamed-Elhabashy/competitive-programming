#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<m;i++)
   cin>>b[i];
   sort(a,a+n);
   sort(b,b+m);
   
   if(2*a[0] >=b[0])
   {
        cout<<"-1";
       
       
   }
   else
   {
        if(2*a[0]<=a[n-1] && b[0]>a[n-1])
        {
             cout<<a[n-1];
          
        }
        else if(2*a[0]>a[n-1] && b[0]>a[n-1])
        {
             cout<<2*a[0];
            
        }
        else
        {
             cout<<"-1";
             
             
        }
   }
}