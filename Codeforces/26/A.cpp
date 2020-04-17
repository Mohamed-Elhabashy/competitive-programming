#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6+5, M = 256+5, OO = 0x3f3f3f3f;

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

vector<ll> getDivisors(ll n)        //O(sqrt(n))
{
    vector<ll> ret;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i == n/i && n%i==0)    ret.push_back(i);
    return ret;
}
vector<ll> getMultiples(ll x, ll n)
{
    vector<ll> ret;
    for(ll m = x ; m <= n ; m += x)
        ret.push_back(m);
    return ret;
}

// bool is_prime[N];
bitset<N> is_prime;
void sieve()        //O(N*log(log(n))) ~= O(N)
{
    // fill(is_prime, is_prime+N, 1);       //with arrays
    is_prime.set();     //fills with 1
    is_prime[0] = is_prime[1] = 0;
    for(ll p = 2 ; p <= N/p ; ++p)
        if(is_prime[p])
            for(ll m = p*p ; m < N ; m += p)
                is_prime[m] = 0;
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
int n;
int main()
{
    scanf("%d",&n);

    sieve();

    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int cnt=0;
        vector<ll>v;
        v=getDivisors(i);

        for(int j=0;j<v.size();j++)
        {
            if(is_prime[v[j]]==1)
            cnt++;
        }
        if(cnt==2){
        ans++;

        }

    }
    printf("%d\n",ans);

    return 0;
}
