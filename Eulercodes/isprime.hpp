#ifndef isprime_H_INCLUDED
#define isprime_H_INCLUDED

int isprime(long long int n)
{
    long long int i;
    if(n==1)return 0;
    for(i=2; i<=n/2;++i){if(n%i==0)return 0;}
    return 1;
}

#endif // isprime_H_INCLUDED
