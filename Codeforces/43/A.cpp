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
char arr[2000];

int main(){
    int n=d();
    vector<string>v;
    map<string,int>mp;
    string s,s1,s2;
    for(int i=0;i<n;i++){

        cin>>s;
        if(i==0)
        s1=s;
        else{
            if(s1!=s)
            s2=s;
        }
        mp[s]++;
    }
    if(mp[s1]>=mp[s2])
        cout<<s1<<endl;
    else
        cout<<s2<<endl;

}
