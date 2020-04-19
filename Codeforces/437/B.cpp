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

int main()
{
    int sum=d(),limit=d();

    vector<int>v;
    while(limit>0){

        if(limit&1){

            sum--;
            //cout<<"1 "<<limit<<"  " <<sum<<"\n";

            v.push_back(limit);
            limit--;

        }
        else
        for(int i=0;i<30;i++){
            if((1<<i)& limit){
                if((1<<i)> sum){
                    limit--;
                    break;
                }
                else{
                    sum-=(1<<i);

                    //cout<<"2 "<<limit<<"  " <<sum<<"\n";
                    v.push_back(limit);
                    limit--;

                    break;
                }
            }
        }
        if(sum==0){
            cout<<v.size()<<endl;
            for(auto ans:v)cout<<ans<<" ";
            puts("");
            return 0;
        }

    }

        puts("-1");
}
