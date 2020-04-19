#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e3+4,OO=0x3f3f3f3f;
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
ll power(ll a, ll b, ll m){
    if(!b)  return 1;
    ll t = power(a, b>>1, m)%m;
    return ((t*t)%m * (b&1 ? a : 1)%m)%m;
}
int arr[N][N];
int r[N];
int c[N];
int h,w;
bool isvaild(int r,int c){
    return r>=0 && r<h && c>=0 && c<w;
}
int main()
{


    scanf("%d %d",&h,&w);
    int x;
    for(int i=0;i<h;i++){
        scanf("%d",&x);

        if(x==0)
            arr[i][0]=1;


        else{

            int y=0;
            while(x--)
            arr[i][y++]=2;
            arr[i][y]=1;
        }
    }
   //     for(int j=0;j<w;j++){
   //         cout<<arr[i][j]<<" ";
    //    }
    //cout<<endl;
   // }
    for(int i=0;i<w;i++){
        scanf("%d",&x);
        if(x==0){
            if(arr[0][i]==2){
                cout<<0<<endl;
                return 0;
            }
            else
            arr[0][i]=1;


        }
        else{

            int y=0;
            while(x--){
                if(arr[y][i]==1){
                cout<<0<<endl;
                return 0;
                }
                arr[y++][i]=2;
            }
                if(arr[y][i]==2){
                    cout<<0<<endl;
                    return 0;
                }
                arr[y++][i]=1;

        }
    }
    ll ans=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(arr[i][j]==0){
                ans++;
            }
        }

    }
    //cout<<ans<<endl;
    ll an=power(2,ans,1000000007);
    printf("%lld\n",an);
}

