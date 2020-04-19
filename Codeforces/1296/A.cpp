#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int n ;
bool solve ()
{
    scanf ("%d" , &n) ;
    int odd = 0 ;
    int x ;
    for (int i =0 ; i < n ;i++)
    {
        scanf ("%d" , &x );
        odd += (x % 2 );
    }
    if (n % 2)
    {
        return odd > 0;
    }else
    {
        return (odd != n && odd );
    }
}
int main()
{
    int t ;
    scanf ("%d" , &t );
    while (t--)
    {

        if ( solve() )
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}
