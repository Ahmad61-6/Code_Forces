#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i=0,sum=0;
    cin>>a>>b;

    while(1){
        sum+=a;
        i++;
        if(sum%10==0 || sum%10==b){
            cout<<i<<endl;
            break;
        }
        else{
            continue;
        }
    }
}
