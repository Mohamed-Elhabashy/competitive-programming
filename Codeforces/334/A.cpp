#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e3,OO = 0x3f3f3f3f;
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
string s="";
void solve(){
    string s1;
    for(int i=1;true;i++){
        s1=to_string(i);
        s+=s1;
        if(s.length()>2000)
        break;
    }
}
int main()
{
    int n=d();
    int f=1;
    int e=n*n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++)
            printf("%d ",f++);
        for(int j=0;j<n/2;j++)
        printf("%d ",e--);
        puts("");

    }

}