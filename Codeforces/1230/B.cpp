#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e6+2,OO=0x3f3f3f3f;
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
int arr[10];
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(n==1 && k>0)
    {
        puts("0");
        return 0;
    }
    if(n==1 && k==0){
        cout<<s<<endl;
        return 0;
    }
    if(s[0]> '1' && k>0)
    {
        s[0]='1';
        k--;
        //cout<<11<<" "<<k<<endl;
        if(k==0)
        {
            cout<<s<<"\n";
            return 0;
        }
    }

    for(int i=1; i<n; i++)
    {
        //cout<<s[i]<<" "<<k<<endl;
        if(k>0 && s[i]>'0')
        {

            s[i]='0';
            k--;
            //cout<<22<<" "<<k<<endl;

        }
    }
    cout<<s<<endl;
}

