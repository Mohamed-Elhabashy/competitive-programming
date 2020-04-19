#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, a, b,price;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    if(m * a > b)
    {
       price=(n%m)*a;
       if(price>b){
            cout<<(n/m)*b+b<<"\n";
       }else
            cout<<(n/m)*b+price<<"\n";


        }

    else
        cout<<n*a<<"\n";

    return 0;
}

