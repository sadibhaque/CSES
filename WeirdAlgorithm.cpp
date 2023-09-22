#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

int main() {

    ll n,t; 
    ll sum = 0,ctr=0,flag=0;
    cin>>t;

    cout<<t<<" ";

    while(t != 1){
        if(t%2 != 0){
            t = (t*3)+1;
            cout<<t<<" ";
        }
        else{
            t = t/2;
            cout<<t<<" ";
        }
    }
    return 0;
}