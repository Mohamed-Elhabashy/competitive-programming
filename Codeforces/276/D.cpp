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

int main(){
    long long l;
    long long r;
    cin>>l>>r;
    int bit=62;
    while(bit >= 0  && (l&(1ll<<bit))==(r&(1ll<<bit)))
        bit--;

    bit++;
    cout << (1ll << bit)-1 <<"\n";
}
