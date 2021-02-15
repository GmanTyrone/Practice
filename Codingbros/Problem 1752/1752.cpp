#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,n,test,ones,twos;
    cin>>T;
    string results[T];
    for(int j=0;j<T;++j)
    {
        cin>>n;
        ones=0;
        twos=0;
        for(int i=0;i<n;++i){
            cin>>test;
            if(test==1)ones++;
            if(test==2)twos++;
        }
        if(twos==0&&ones==0)results[j]="NO";
        else if((twos%2==0&&ones%2==0)||(twos%2!=0&&ones%2==0&&ones!=0))results[j]="YES";
        else results[j]="NO";
    }
    for(int i=0;i<T;++i){
        cout<<results[i]<<endl;
    }
    return 0;
}
