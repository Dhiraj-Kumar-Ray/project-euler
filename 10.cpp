#include<iostream>
#include<stdio.h>
using namespace std;
int prime(int n)
{
    int f =1;
    if(n%2 ==0)
    {
        return 0;
    }
    for(long i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            return 0;
        }
        return f;
    }
    return 0;
}
int main()
{
    long sum =2;
    for(int i=3;i<2000000;i+=2)
    {
        if(prime(i) ==1)
        {
            sum+=i;
        }
    }
    cout<<"Sum "<<sum;
}