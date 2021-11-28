//program 6

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   long squareofsum=0,sumofsquare=0, difference=0,i;
   for(i=1;i<=100;i++){
       sumofsquare= sumofsquare+ i*i;
       squareofsum=squareofsum + i;
   }
   squareofsum=squareofsum*squareofsum;
   difference=squareofsum-sumofsquare;
   cout<<difference;


}