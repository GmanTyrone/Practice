#include <iostream>
#include <math.h>

using namespace std;

int sumDigits(int n)
{
    int total = 0;
    total+=n%10;
    while (n > 0)
    {
        if(n/10==0)total+=n%10;
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
        if(n==0)a[i]=0;
        else a[i]=sumDigits(n);
    }
    for(int number:a){
        cout<<number<<endl;
    }
    return 0;
}
