#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n;
int arr[N];
map<int,bool>mp;
set<int>s;
int l,r;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

        mp[arr[i]]=1;
    }

    for(int i=1; i<=n; i++)
    {
        if(mp[i]==0)
            s.insert(i);
    }
    bool f=0;


    for(int i=1;i<=n;i++){
        if(arr[i]==0){


            auto it=s.begin();
            arr[i]=*it;
            s.erase(it);
            if(f){
                swap(arr[l],arr[i]);f=0;r=i;
            }
            else if(*it==i){
                f=1;
                l=i;
            }

            else r=i;



        }
    }
    if(f)swap(arr[l],arr[r]);
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
