#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(void)
{
    int T,N,K;
    string test;
    cin>>T;
    int scores[T][2];
    for (int i=0;i<T;++i){
        scores[i][0]==0;
        scores[i][1]==0;
    }
    for(int i=0;i<T;++i){
        cin>>N>>K;
        cin>>test;
        for(int j=0;i<N;++i){
            if(test[j]!=test[N-j])scores[i][0]++;
        }
        scores[i][1]=K-scores[i][0];
    }
    for(int i=0;i<T;++i){
        cout<<"Case #"<<i+1<<": "<<scores[i][1]<<endl;
    }
    return 0;
}
