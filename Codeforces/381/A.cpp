#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6+5;
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
int arr[10000];
int main()
{
    int n=d();
    for(int i=0; i<n; i++)
        scanf("%d",arr+i);
    int sum1=0,sum2=0;
    int st=1;
    for(int i=0,j=n-1;i<=j;)
    {
        if(st==1)
        {

            if(arr[i]>arr[j])
            {
                sum1+=arr[i];
                i++;
            }
            else
            {
                sum1+=arr[j];
                j--;
            }
            st=0;
        }
        else
        {

            if(arr[i]>arr[j])
            {
                sum2+=arr[i];
                i++;
            }
            else
            {
                sum2+=arr[j];
                j--;
            }
            st=1;
        }
    }
    printf("%d %d\n",sum1,sum2);
}
