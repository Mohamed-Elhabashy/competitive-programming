#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n,k;
bool isok(int num){
    int tmp=n;
    ll kk=1;
    tmp-=num;
    for(int i=1;true;i++){
        kk*=k;
        int x=num/(kk);
        if(x==0)break;
        tmp-=x;
    }


    return (tmp<=0);
}

int bs(){
    int lo=1,hi=1e9,mid;
    while(hi>lo){
        mid=(hi+lo)/2;
        if(isok(mid)){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
    return lo;
}
int main()
{
    cin>>n>>k;
    cout<<bs()<<endl;
}
