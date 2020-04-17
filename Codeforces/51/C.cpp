#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
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
bool cmp(pair<int, int> s, pair<int, int> f)
{
    if (f.first > s.first)
        return true;
    else if (f.first == f.second && f.second < s.second)
        return true;
    else
        return false;
}
long long arr[N],n;
bool IsCover(long long d){
    long long lastcover=-1,used=0;
    for(int i=0;i<n;i++){
        if(arr[i]>lastcover){
        lastcover=arr[i]+(2*d);
        used++;
        }

    }
    return used<=3;
}
long long PS(){
    long long hi=4e9,lo=0,mid;
    while(hi-lo > 0){
        mid=(lo+hi)/2;
        if(IsCover(mid))hi=mid;
        else lo=mid+1;
    }
    return lo;
}
int main(){
     n=d();
    for(int i=0;i<n;i++){
        scanf("%lld",arr+i);
        arr[i]<<=1;
    }
    sort(arr,arr+n);
    int d=PS();

    printf("%lf\n",d/2.0);

    long long lastcover=-1,used=0;
    for(int i=0;i<n;i++){
        if(arr[i]>lastcover){
        lastcover=arr[i]+(2*d);
        printf("%lf ",(arr[i]+d)/2.0);
        used++;

        }

    }
    while(used<3){
    printf("%lld ",arr[0]/2);
    used++;
    }
    puts("");


}
