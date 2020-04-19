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
const long long N = 2e5+20,OO=0x3f3f3f3f,mod=1e9+7;
char ans[200];

int main()
{
    int t=d();
    while(t--)
    {
        int n=d(),win=0;
        int length=n;
        int R1=d(),P1=d(),S1=d();
        string s1;
        cin>>s1;
        if(n%2==0)n=n/2;
        else n=n/2 +1;
        //cout<<n<<"\n";
        string s="RPS";
        sort(s.begin(),s.end());
        bool f=0;
        do{
            int win=0;

            for(int i=0;i<200;i++)
            ans[i]='Z';
            int t_R=R1;
            int t_P=P1;
            int t_S=S1;
            for(int i=0;i<s.length();i++){
                for(int j=0;j<s1.length();j++){
                    if(s[i]=='R' && s1[j]=='S' && t_R>0){
                        win++;
                        t_R--;
                        ans[j]='R';
                    }
                    if(s[i]=='P' && s1[j]=='R' && t_P>0){
                        win++;
                        t_P--;
                        ans[j]='P';
                    }
                    if(s[i]=='S' && s1[j]=='P' && t_S>0){
                        win++;
                        t_S--;
                        ans[j]='S';
                    }
                }
            }

            if(win>=n){

                f=1;
                puts("YES");
                for(int i=0;i<length;i++){
                    if(ans[i] =='Z') {
                        if(t_R>0){
                            ans[i]='R';
                            t_R--;
                        }
                        else if(t_P>0){
                            ans[i]='P';
                            t_P--;
                        }

                        else if(t_S>0){
                            ans[i]='S';
                            t_S--;
                        }
                    }
                    cout<<ans[i];
                }
                cout<<"\n";
                break;
            }
        }
        while(next_permutation(s.begin(),s.end()));
        if(f==0)
        puts("NO");
    }
}
