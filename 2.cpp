//  program 2

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
  int limit=4*pow(10,6);
  int sum=2;
  int prev =1, curr =2;

  while(curr<=limit){
     curr = prev + curr;
     prev= curr -prev;
     if(curr%2==0){
         sum+=curr;
     }
     }
     cout<<"sum "<<sum;
     return 0;

}