#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
ll n,t,a,b;
char arr[40];
int main()
{
    cin>>t;
    for(int i=1;i<=26;i++)arr[i]=(i-1)+'a';
    while(t--){
        cin>>n>>a>>b;
        for(int i=0;i<b;i++){
            cout<<char(i+'a');
        }
        for(int i=b;i<a;i++)cout<<"a";
    //cout<<endl;
        for(int i=a;i<n;i++)
        {
            int tmp=i%a;

            if(tmp>=b)cout<<"a";
            else{
            cout<<arr[tmp+1];}
        }
        cout<<endl;
    }
}
