#include <iostream>
#include <math.h>

using namespace std;

int sumDigits(int n)
{
    int total = 0;
    while (n > 0)
    {
        if(n%10==4)total++;
        //cout<<n%10<<" current n%10"<<endl;
        n /= 10;
    }
    return total;
}

int main()
{
    int T,n;
    cin>> T;
    int a[T];
    for(int i=0;i<T;++i){
        cin>>n;
        if(n<4)a[i]=0;
        else a[i]=sumDigits(n);
    }
    for(int number:a){
        cout<<number<<endl;
    }
    return 0;
}
