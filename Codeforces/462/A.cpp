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
bool cmp(int s,int f){
    if(s>f)
        return true;

    return false;
}
char arr[N];
char arr1[N];
int main(){
    int n=d();
    string s1,s2,s;
    int ans=0;
    for(int i=0;i<n;i++){
            cin>>s;
            s1+=s;

    }
    s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
