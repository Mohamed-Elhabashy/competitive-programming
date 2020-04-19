#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e3+5;
int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
ll mod(ll a,ll b)
{
    return ((a%b +b)%b);
}

ll floor(ll a, ll b)
{
    return (a-mod(a, b))/b;
}

vector<ll> getDivisorsN(ll n)        //O(n)
{
    vector<ll> ret;
    for(ll i = 1 ; i <= n ; ++i)
        if(n%i == 0)    ret.push_back(i);
    return ret;
}

ll getDivisors(ll n)        //O(sqrt(n))
{
    ll cnt=0;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            cnt+=2;
        }
    }
    if(i == n/i && n%i==0)    cnt++;
    return cnt;
}
vector<ll> getMultiples(ll x, ll n)
{
    vector<ll> ret;
    for(ll m = x ; m <= n ; m += x)
        ret.push_back(m);
    return ret;
}

// bool is_prime[N];
int prime[N];
int x=0;
bitset<N> is_prime;
void sieve()        //O(N*log(log(n))) ~= O(N)
{
    // fill(is_prime, is_prime+N, 1);       //with arrays
    is_prime.set();     //fills with 1
    is_prime[0] = is_prime[1] = 0;
    for(ll p = 2 ; p <= N/p ; ++p)
        if(is_prime[p]){
            prime[x++]=p;
            for(ll m = p*p ; m < N ; m += p)
                is_prime[m] = 0;

            }
}

vector<pair<ll, ll>> factorize(ll n)
{
    vector<pair<ll, ll> > ret;
    for(ll p = 2 ; p <= n/p ; ++p)
    {
        int e = 0;
        while(n%p == 0)
        {
            n /= p;
            ++e;
        }
        if(e)   ret.push_back({p, e});
    }
    if(n > 1)   ret.push_back({n, 1});
    return ret;
}
int arr[N];

int main()
{
    int k=d(), n=d(),w=d();
    int sum=0;
    for(int i=1;i<=w;i++){
        sum+=(i*k);
    }
    sum-=n;
    if(sum>0)
    printf("%d\n",sum);
    else
    printf("0\n");

}