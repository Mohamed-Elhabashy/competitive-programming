#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int D(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}

vector<long long>v;
vector<long long>v1;
bool issuper(long long temp){
    int cnt_4=0,cnt_7=0;
    while(temp>0){
        if(temp%10==4)
            cnt_4++;
        else
            cnt_7++;
        temp/=10;
    }
    return (cnt_4==cnt_7);
}
int main(){
long long n=lld();
v.push_back(4);
v.push_back(7);
for(int i=0;i<2000;i++){
        v.push_back(v[i]*10 +4);
        v.push_back(v[i]*10 +7);
}
for(int i=0;i<2000;i++){
        if(issuper(v[i]))
         v1.push_back(v[i]);
}

for(int i=0;i<2000;i++){
        if(n<47){
            printf("47\n");
            return 0;
        }

        if(v1[i]==n){
            printf("%lld\n",v1[i]);
            return 0;
        }
        if(n>v1[i]&&n<v1[i+1]){
            printf("%lld\n",v1[i+1]);
            return 0;
        }
}

}

