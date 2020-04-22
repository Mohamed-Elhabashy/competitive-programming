#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7;
long long t,n,x;
bool issame(int i,int j)
{
    if((i>0 && j>0 )||(i<0 && j<0 ))return 1;
    return 0;
}
int main()
{

    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr;
        for(int i=0; i<n; i++){
            cin>>x;
            arr.push_back(x);
        }
        arr.push_back(0);
        vector<vector<int>>v;
        vector<int>tmp;
        tmp.push_back(arr[0]);
        for(int i=1; i<=n; i++)
        {
            if(issame(arr[i],tmp[0])){
                tmp.push_back(arr[i]);
            }
            else{
            v.push_back(tmp);

            tmp.clear();
            tmp.push_back(arr[i]);
        }

        }
        long long ans=0;
        for(int i=0;i<v.size();i++)
        {
            sort(v[i].rbegin(),v[i].rend());

                ans+=v[i][0];

        }
        cout<<ans<<endl;
    }
}
