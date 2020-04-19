#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n,k;
int arr[N];
int arr1[N];
vector<int>v;
map<int,int>mp;
int ans=0;
void solve(){
    if(k==1){
        sort(arr,arr+n);
        cout<<arr[n-1]<<endl;
        cout<<n<<endl;
        return ;
    }
    sort(arr1,arr1+n);
    int kk=k;
    for(int i=n-1;kk--;i--){
        mp[arr1[i]]++;
    }
   
    for(int i=n-1;k--;i--){
        int tmp=arr1[i];
        int cnt=0;
        //cout<<"tmp : "<<tmp<<" map : "<<mp[tmp]<<endl;
        for(int j=0;j<n;j++){

            if(arr[j]==tmp){
                cnt++;
                if(mp[tmp]==cnt){
                    //cout<<j<<endl;
                    v.push_back(j);
                    mp[tmp]--;
                    break;
                }
            }
        }
        ans+=tmp;
    }
    cout<<ans<<endl;
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        if(i==0){
            cout<<v[i]+1<< " ";
            continue;
        }
        if(i==v.size()-1){
            cout<<n-1-v[i-1]<<endl;
            continue;
        }
        cout<<v[i]-v[i-1]<<" ";
    }

}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[i]=arr[i];

    }

    solve();
}
