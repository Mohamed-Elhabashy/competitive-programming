#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ; 
    for (int i =1 ; i <= n ; i ++ )
    {
        cout << "I "<< ( i%2 ? "hate " : "love " ) << (i+1 > n ? "it " : "that ");
    }
 
    return 0 ;

    
}