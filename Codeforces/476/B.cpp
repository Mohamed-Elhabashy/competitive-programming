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
int n ,total,ans,counter;
char arr[15];
char arr1[15];
void solve(int i,int sum){
    if(i==n){
        if(sum==total)
            ans++;
        counter++;
        return ;
    }
    else if(arr1[i]=='+') solve(i+1,sum+1);
    else if(arr1[i]=='-')solve(i+1,sum-1);
    else{
        solve(i+1,sum+1);
        solve(i+1,sum-1);
    }

}
int main(){
    scanf("%s",arr);
    scanf("%s",arr1);
    n=strlen(arr);
    for(int i=0;i<n;i++)
        if(arr[i]=='+')total++;
        else total--;
    solve(0,0);
    printf("%.12lf\n",(double)ans/counter);
}
