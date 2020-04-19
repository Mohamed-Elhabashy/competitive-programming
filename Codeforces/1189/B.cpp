#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d()
{
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(pair<int,int>s,pair<int,int>f)
{
    if(f.first>s.first)
        return true;
    else if(f.first==f.second && f.second<s.second)
        return true;
    else
        return false;
}
int arr[N];
vector<string>v;
int main()
{
    int n=d();
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    sort(arr,arr+n);

    bool flag=false;
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(!(arr[n-1]<(arr[n-2]+arr[0]))){
                swap(arr[n-1],arr[n-2]);
                flag=true;


            }
        }
        else if(i==0){
            if(!(arr[0]<(arr[1]+arr[n-1]))){
            printf("NO\n");
            return 0;
            }

        }
        else{
            if(!(arr[i]<(arr[i+1]+arr[i-1]))){
            printf("NO\n");
            return 0;
            }
        }

    }
    if(flag==false){
    printf("YES\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
    }
    else{
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(!(arr[n-1]<(arr[n-2]+arr[0]))){
               printf("NO\n");


            }
        }
        else if(i==0){
            if(!(arr[0]<(arr[1]+arr[n-1]))){
            printf("NO\n");
            return 0;
            }

        }
        else{
            if(!(arr[i]<(arr[i+1]+arr[i-1]))){
            printf("NO\n");
            return 0;
            }
        }

    }
    printf("YES\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
    }
}
