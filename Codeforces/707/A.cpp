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
const long long N = 1e4,OO=0x3f3f3f3f;

//3 1 100 5
/*
int arr[N],n;
int solve(int f,int e,int cnt,int last){
    if(cnt==(n+1)/2)return 0;
    if(f>e)return -OO;
    int choice=-OO;
    int choice1=-OO;

    if(last!=1)
    choice=arr[f]+solve(f+1,e,cnt+1,1);
    if(last!=2)
    choice1=arr[e]+solve(f,e-1,cnt+1,2);
    return max(choice1,choice);
}
*/
map<string,int>mp;
int main()
{
    char c;
    int n=d(),m=d();
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c;
            if(c=='C' || c=='M' || c=='Y')flag=1;
        }

    }
    if(flag)
    puts("#Color");
    else
    puts("#Black&White");
}
