#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;

int t,n,m;
char arr[N];
int f[26];
int cm[N];
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        scanf("%s",arr);
        memset(cm,0,sizeof cm);
        memset(f,0,sizeof f);

        while(m--){
            int x;
            scanf("%d",&x);
            cm[0]++;
            cm[x]--;
        }
        cm[0]++;
        cm[n]--;
        for(int i=1;i<n;i++)cm[i]=cm[i]+cm[i-1];
        for(int i=0;i<n;i++)f[arr[i]-'a']+=cm[i];
        for(int i=0;i<26;i++)printf("%d ",f[i]);

        puts("");

    }
}
