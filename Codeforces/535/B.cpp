#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
const int N=1e7 +5;
ll  a,b,c,d,cntp,cnts;
ll solve(ll lucky , ll index)
{
     if(lucky > a)
        return -1;
   else if( lucky==a )
        return index;
 
    return max(solve(lucky*10+4 , index*2+1 ),solve(lucky * 10 + 7 ,index*2 + 2 ));
}
int main(){
    scanf("%lld",&a);
cout<<solve(0,0);
}
