#include<bits/stdc++.h>
using namespace std;

const int N=1e5+30;
typedef long long ll;
int f1[26];
int f2[26];
string s,s1;

int main()
{
    cin>>s>>s1;
    int ans=0;
    int i,j;
    for( i=s.length()-1,j=s1.length()-1;i>=0 && j>=0;i--,j--){
        if(s[i]==s1[j])continue;
        break;
    }
    i++;j++;
    ans+=i+j;

    cout<<ans<<endl;
}
