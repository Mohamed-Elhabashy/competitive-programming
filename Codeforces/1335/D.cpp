#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
ll n,t,x,j;
map<int,pair<int,int>>mp;
char s[100][100];
int main()
{
    mp[1]={6,5};
    mp[2]={1,0};
    mp[3]={5,8};
    mp[4]={8,5};
    mp[5]={2,0};
    mp[6]={4,7};
    mp[7]={7,6};
    mp[8]={0,1};
    mp[9]={3,2};
    cin>>t;
    while(t--){
        for(int i=1;i<=9;i++)cin>>s[i];
        for(int i=1;i<=9;i++){

            s[i][mp[i].first]=s[i][mp[i].second];
        }
        for(int i=1;i<=9;i++){
            for(int j=0;j<9;j++)cout<<s[i][j];
            cout<<endl;
        }
    }

}
