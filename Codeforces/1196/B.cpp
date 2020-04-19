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
const int N=1e4;
string arr;
int frq[26];
int main()
{
    //freopen("window.in","r",stdin);
    int t=d();
    while(t--)
    {
        int n=d(),k=d();
        vector<int>ans;

        int odd=0;
        for(int i=0;i<n;i++){
            int x=d();
            if(x&1){
            ans.push_back(i+1);
            odd++;
            }
        }
        if(odd>=k && odd%2==k%2){
            puts("YES");
            for(auto v:ans){
                if(k==1)
                break;
                cout<<v<<" ";
                k--;
            }
            cout<<n<<endl;
        }
        else
            puts("NO");
    }
}
