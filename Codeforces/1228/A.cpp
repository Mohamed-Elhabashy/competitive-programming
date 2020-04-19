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
int f[11];
int main()
{
    int l,r;
    string s;
    cin>>l>>r;


    for(int i=l; i<=r; i++)
    {
        memset(f,0,sizeof f);
        s=to_string(i);
        for(int i=0; i<s.length(); i++)
        {
            f[s[i]-'0']++;
        }
        bool flag=0;
        for(int i=0; i<=9; i++)
        {
            if(f[i]>1)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

}

