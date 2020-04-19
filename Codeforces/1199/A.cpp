#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e7;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
int arr[N];
int main()
{
    int n=d(),xx=d(),yy=d();
    for(int i=1; i<=n; i++)    scanf("%d",arr+i);
    for(int i=1; i<=n; i++)
    {
        bool flag=false;
        int x=xx;
        int y=yy;
        for(int j=i-1; x>0; j--)
        {
            if(j>=1 && !(arr[i]<arr[j]) ){
                flag=true;
                
                
            }
            x--;
        }

        for(int z=i+1; y>0; z++)
        {
            if(z<=n &&!(arr[i]<arr[z])){
                
                flag=true;
                }
            y--;
        }
        if(flag==false)
        {
            printf("%d\n",i);
            return 0;
        }

    }
}
