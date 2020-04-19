#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d(){
    int ret;
    scanf("%f",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}

int main(){
     long long n,k;
     cin>>n>>k;
     long long x=ceil(n/2.0);


     if(k==1)
        cout<<"1\n";

     else if(k<=x){
            cout<<k+(k-1)<<"\n";
     }
     else
        cout<<(k-x)*2<<"\n";


}
