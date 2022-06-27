#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

long int largestpalindrome(int n)
{
    long int answer=0,test=1,tama;
    string respuesta;
    for(int i=1;i<pow(10,n);++i){
        for(int j=1;j<pow(10,n);++j){
            test=i*j;
            respuesta=to_string(test);
            tama=respuesta.size()-1;
            for(int k=0;k<=tama/2;++k){
                if(respuesta[k]!=respuesta[tama-k])break;
                if((k==(tama/2))&&test>answer)answer=test;
            }
        }
    }
    return answer;
}

int main()
{
    auto result=0;
    result=largestpalindrome(3);
    cout<<"largest 3x3 palindrome: "<<result<<endl;
    return 0;
}
