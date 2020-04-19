#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6,OO = 0x3f3f3f3f;
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

int main()
{
    int t=d();
    while(t--){
        ll str =lld(),in=lld(),exp=lld();
        if(exp==0){
            if(str>in)
            printf("1\n");
            else
            printf("0\n");
            continue;
        }

        if(str==in){
            if(exp%2==0){
                printf("%lld\n",exp/2);

            }
            else{
                printf("%lld\n",(exp/2)+1);
            }
            continue;
        }
        if(str-in>=exp){
            if(str-in>exp)
                printf("%lld\n",exp+1);
            else
                printf("%lld\n",exp);
            continue;
        }

        if(str<in){
            ll ans=in-str;
            if(exp-ans>=0){
                str=in;
                exp-=ans;

                if(exp%2==0){
                printf("%lld\n",exp/2);

            }
            else{
                printf("%lld\n",(exp/2)+1);
            }
            continue;

            }
            else
            printf("0\n");
            continue;
        }
        if(str>in){
            ll f=str;
            ll s=in+exp;

            ll ans=(s+f)/2;
            ans=ans-str;
            printf("%lld\n",exp-ans);
        }
    }
}
