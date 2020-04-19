#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=200000+10,OO = 0x3f3f3f3f;
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

char arr[N];
int main()
{
    int n=d();
    scanf("%s",arr);
    int e;
    bool flag=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='R')
        {
            e=i;
        }
        else if(arr[i]=='L')
        {
            flag=1;
        }

    }
    if(flag==0)
    {
        int f;
        for(int i=0; i<n; i++)
        {
            if(arr[i]=='R')
            {
                f=i;
                break;
            }
        }
        printf("%d %d\n",e+1,e+2);
        return 0;
    }
    flag=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='L')
        {
            e=i;
        }
        else if(arr[i]=='R')
        {
            flag=1;
        }

    }
    if(flag==0)
    {
        int f;
        for(int i=0; i<n; i++)
        {
            if(arr[i]=='L')
            {
                f=i;
                break;
            }
        }
        printf("%d %d\n",e+1,f);
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='L')
        e=i;
    }
    int f;
    for(int i=0;i<n;i++){
        if(arr[i]=='L'){
        f=i;break;}
    }
    printf("%d %d\n",e+1,f+1);

}
