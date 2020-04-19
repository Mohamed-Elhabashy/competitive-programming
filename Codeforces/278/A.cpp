#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6,OO = 0x3f3f3f3f;
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
int arr[200];
int main(){
    int n=d();
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    int x=d(),y=d();
    if(x==y){
        puts("0");
        return 0;
    }
    x--;y--;
    int sum1=0,sum2=0;
    for(int i=x;i!=y;i++){
        if(i==n){
        i=0;
        if(i==y)break;
        }
        sum1+=arr[i];

    }

    for(int i=x;i!=y;i--){
        if(i==-1){
        i=n-1;
        if(i==y){
            sum2+=arr[n-1];
            break;
            }
        }
        if(i-1!=-1)
        sum2+=arr[i-1];
        else{
            if(y!=n-1){
                sum2+=arr[n-1];
            }
            else {
                sum2+=arr[n-1];
                break;
                }
        }

    }
    printf("%d\n",min(sum1,sum2));
}