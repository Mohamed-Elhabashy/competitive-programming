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
//char arr[N];
int arr[N];

int main(){
    for(int i=0;i<4;i++)
        scanf("%d",arr+i);

    sort(arr,arr+4);
    int a,b,c;
    int temp=arr[2]-arr[1];
    a=(arr[0]-temp)/2;
    c=arr[1]-a;
    b=arr[2]-c;
    printf("%d %d %d\n",a,b,c);

}
