#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,product,reverse =0,temp, max=0;
    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
        {
            product=i*j;
            temp=product;
            while(temp>0){
                reverse=reverse*10+temp%10;
                temp=temp/10;
            }
           if(product==reverse)
           {
               if(product>max){
                   max=product;
               }
           } 
           reverse=0;

        }
    }
    cout<<"max ="<<max;
}