#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(int s,int f){
    if(s>f)
        return true;

    return false;
}
int arr[N];
int main(){
    int n=d();
    int temp=n%10;
    int f=n/10;
    int l=((n/100)*10)+temp;
    n=max(n,f);
    n=max(n,l);
    printf("%d\n",n);

}
