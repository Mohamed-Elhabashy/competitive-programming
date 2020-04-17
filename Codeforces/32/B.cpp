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
char arr[N];
int main()
{
    scanf("%s",arr);
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]=='.')
            printf("0");
        else if(arr[i]=='-' && arr[i+1]=='.')
            printf("1"),i++;
        else
            printf("2"),i++;
    }
    puts("");
}
