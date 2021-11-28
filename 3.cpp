#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 long long  i,n= 600851475143;
 for(i=2;i<n;++i)
{
while(n%i==0)
{
n=n/i;

}	
}
cout<<" Largest prime factor is "<<n<<endl;	
return 0; 

}