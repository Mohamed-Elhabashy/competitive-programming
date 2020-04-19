#include<bits/stdc++.h>
using namespace std;

const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
vector<pair<int,int>>v;

int main(){
    int n=d();
    for(int i=0;i<n;i++){
        int x=d(),y=d();
        v.push_back(make_pair(x,y));
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        bool flag1=0,flag2=0,flag3=0,flag4=0;
        for(int j=0;j<n;j++){
            if(v[i].first>v[j].first && v[i].second==v[j].second && i!=j)
                flag1=true;
            else if(v[i].first<v[j].first && v[i].second==v[j].second && i!=j)
                flag2=true;
            else if(v[i].first==v[j].first && v[i].second<v[j].second && i!=j)
                flag3=true;
            else if(v[i].first==v[j].first && v[i].second>v[j].second && i!=j)
                flag4=true;

        }
        if(flag1==true && flag2==true && flag3==true && flag4==true)
            cnt++;
    }

    printf("%d\n",cnt);
}

/*
                                       ███████████████████████████
                                       ███████▀▀▀░░░░░░░▀▀▀███████
                                       ████▀░░░░░░░░░░░░░░░░░▀████
                                       ███│░░░░░░░░░░░░░░░░░░░│███
                                       ██▌│░░░░░░░░░░░░░░░░░░░│▐██
                                       ██░└┐░░░░░░░░░░░░░░░░░┌┘░██
                                       ██░░└┐░░░░░░░░░░░░░░░┌┘░░██
                                       ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
                                       ██▌░│██████▌░░░▐██████│░▐██
                                       ███░│▐███▀▀░░▄░░▀▀███▌│░███
                                       ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
                                       ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
                                       ████▄─┘██▌░░░░░░░▐██└─▄████
                                       █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
                                       ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
                                       █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
                                       ███████▄░░░░░░░░░░░▄███████
                                       ██████████▄▄▄▄▄▄▄██████████
                                       ███████████████████████████
                                      ▂▃▄▅▆▇█▓▒░(Elhabashy)░▒▓█▇▆▅▄▃    */
