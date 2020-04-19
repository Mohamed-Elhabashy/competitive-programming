#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 2*1e5 +20,OO=0x3f3f3f3f;
string arr;
int main()
{
    int n;
    cin>>n;
    cin>>arr;
    if(n==1){

        cout<<0<<"\n"<<arr<<endl;
        return 0;
    }


    string s="BGR",s1;
    int ans=INT_MAX;
    do{
        int cnt=0;
        for(int i=0;i<n;i++){
            if(i%3==0 && arr[i]!=s[0])cnt++;
            if(i%3==1 && arr[i]!=s[1])cnt++;
            if(i%3==2 && arr[i]!=s[2])cnt++;


        }
        if(cnt<ans){
            ans=cnt;
            s1=s;
        }
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
            if(i%3==0 && arr[i]!=s1[0])arr[i]=s1[0];
            if(i%3==1 && arr[i]!=s1[1])arr[i]=s1[1];
            if(i%3==2 && arr[i]!=s1[2])arr[i]=s1[2];


    }
    cout<<arr<<endl;
}
