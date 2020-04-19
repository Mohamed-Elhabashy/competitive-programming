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
bool isplaind(int n){
    string s=to_string(n);
    string s1="";
    for(int i=s.length()-1;i>=0;i--)
        s1+=s[i];
    return (s==s1);
}
int product[N],custmer[N];
vector<pair<int,int>>v;
int main(){
    int n=d(),f=d();
    for(int i=0;i<n;i++){
        scanf("%d %d",product+i,custmer+i);
        if(product[i]==0){
            continue;
        }
        else if(custmer[i]==0){
            continue;
        }
        else{
        int temp=min(custmer[i],product[i]);
        int x=min(2*product[i],custmer[i]);
        if(x==temp)
        v.push_back({0,i});
        else
        v.push_back({x-temp,i});
        }
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0&&f--;i--){
        product[v[i].second]*=2;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=min(custmer[i],product[i]);
    }
    printf("%lld\n",sum);
}