
// program 9
#include<iostream>
#include<stdio.h>
using namespace std;
void pythagoreanTriplet(int n)
{
    for (int i = 1; i <= n / 3; i++)
    {
        for (int j = i + 1; j <= n / 2; j++)
        {
            int k = n - i - j;
            if (i * i + j * j == k * k)
            {
                cout << i << ", "<< j << ", "<< k<<"  is a pythagorian triplet with sum="<<i+j+k<<endl;
                     cout<<"and product is = "<<i*j*k;

                return;
            }
        }
    }
 
    cout << "No Triplet";
}
 

int main()
{
    int n = 1000;
    pythagoreanTriplet(n);
    return 0;
}