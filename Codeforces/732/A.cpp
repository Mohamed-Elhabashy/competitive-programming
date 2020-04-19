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
vector<pair<int,int>>v;
int main()
{
    int k=d(),r=d();
    for(int i=1;i<1000;i++){
        int sum=i*k;
        if(sum%10==0){
            printf("%d\n",i);
            return 0;
        }
        else if(sum%10==r){

            printf("%d\n",i);
            return 0;
        }
    }

}
