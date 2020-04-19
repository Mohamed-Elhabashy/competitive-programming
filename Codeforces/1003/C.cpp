#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;

int n,k;
int arr[N];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>arr[i];

    vector<double>v;
    for(int i=1;i<=n;i++){
        double sum=0;
        int cnt=0;
        for(int j=i;j<=n;j++){
            cnt++;
            sum+=arr[j];
            if(cnt>=k){
                v.push_back(sum/cnt);
            }
        }

    }
    sort(v.begin(),v.end());
    printf("%.15f",v[v.size()-1]);
}
