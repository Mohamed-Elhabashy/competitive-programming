#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N = 1e6+5;

int main()
{
  double n;
  cin>>n;
  double sum=0;
  while(n>0){
    sum+=(1.0/n);
    n--;
  }
  printf("%.12lf",sum);
}
