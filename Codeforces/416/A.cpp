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
/*
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
    long long hi=1e5,lo=0,mid;
    while(hi-lo > 0){
        mid=(lo+hi)/2;
        if(IsCover(mid))hi=mid;
        else lo=mid+1;
    }
    return lo;
}
*/
char arr[4];
char arr1[4];
int main()
{

    int n=d(),lo=-2e9,hi=2e9;
    while(n--)
    {
        scanf("%s",arr);
        int x=d();
        scanf("%s",arr1);
        if(arr[0]=='>' && arr[1]=='='){
            if(arr1[0]=='Y'){
                lo=max(lo,x);
            }
            else{
                hi=min(hi,x-1);
            }

        }
        else if(arr[0]=='>'){
            if(arr1[0]=='Y'){
                lo=max(lo,x+1);
            }
            else{
                hi=min(hi,x);
            }

        }
        else if(arr[0]=='<' && arr[1]=='='){
            if(arr1[0]=='Y'){

                hi=min(x,hi);
            }
            else{
                lo=max(lo,x+1);
            }

        }
        else if(arr[0]=='<'){
            if(arr1[0]=='Y'){
                hi=min(x-1,hi);
            }
            else{
                lo=max(lo,x);
            }

        }


    }


    if(lo>hi)
    {
        printf("Impossible\n");
        return 0;
    }
    printf("%d\n",lo);
}
