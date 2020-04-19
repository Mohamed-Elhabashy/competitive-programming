#include<bits/stdc++.h>
using namespace std;

const int N=1e5 +10;
typedef long long ll;
int n,t,arr1[N],arr2[N];
int mp0[N];
int mp1[N];
int mp2[N];

int main()
{
    cin>>t;
    while(t--){
        memset(mp1,0,sizeof mp1);
        memset(mp2,0,sizeof mp2);
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr1[i];
            if(arr1[i]==0){
                mp1[i]=mp1[i-1];
                mp2[i]=mp2[i-1];
            }
            if(arr1[i]==1){
                mp1[i]=mp1[i-1]+1;
                mp2[i]=mp2[i-1];
            }
            if(arr1[i]==-1){
                mp1[i]=mp1[i-1];
                mp2[i]=mp2[i-1]+1;
            }
        }
        for(int i=1;i<=n;i++)cin>>arr2[i];
        bool f=0;
        for(int i=1;i<=n;i++){
            if(arr1[i]==arr2[i])continue;
            if(arr2[i]>arr1[i]){
                if(mp1[i-1]>0)continue;
                else{
                    f=1;
                    break;
                }
            }
            else{
                if(mp2[i-1]>0)continue;
                else{
                    f=1;
                    break;
                }
            }
        }
        if(f)puts("NO");
        else puts("YES");

    }

}
