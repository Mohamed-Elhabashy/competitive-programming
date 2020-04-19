#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e7,OO = 0x3f3f3f3f;
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
char arr1[N];
char arr2[N];
int main()
{
    int n=d(),k=d();
    scanf("%s",arr);
    if(k==2){
        for(int i=0;i<n;i++)
            if(i%2==0)
            arr1[i]='A';
            else
            arr1[i]='B';
        for(int i=0;i<n;i++)
            if(i%2==0)
            arr2[i]='B';
            else
            arr2[i]='A';
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr1[i])cnt1++;
            if(arr[i]!=arr2[i])cnt2++;
        }
        if(cnt1<cnt2){
            printf("%d\n%s\n",cnt1,arr1);
        }
        else
        printf("%d\n%s\n",cnt2,arr2);
        
        return 0;
    }

    int ans=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            continue;
        }
        else if(!(arr[i]<='A'+k-1)){
                for(int j=0; j<k; j++)
            {
                if(j+'A' != arr[i+1] && j+'A' != arr[i-1] )
                {
                    arr[i]=j+'A';
                    ans++;
                    break;
                }
            }
        }
        else
        {
            for(int j=0; j<k; j++)
            {
                if(j+'A' != arr[i+1] && j+'A' != arr[i-1] )
                {
                    arr[i]=j+'A';
                    ans++;
                    break;
                }
            }

        }
    }
    printf("%d\n",ans);
    printf("%s\n",arr);
}
