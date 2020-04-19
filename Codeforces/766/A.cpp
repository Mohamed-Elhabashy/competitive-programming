#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N = 1e6+5;
char arr[N];
char arr1[N];
int f1[26];
int f2[26];
int main()
{
    scanf("%s",arr);
    scanf("%s",arr1);
    if(strcmp(arr,arr1)==0){
        puts("-1");
        return 0;
    }
    int n1=strlen(arr);
    int n2=strlen(arr1);
    printf("%d\n",max(n1,n2));

}
