// program 5

#include<iostream>
using namespace std;

int main(){
     int y=1,x=1,smallest=0;
    while(x>0){
        y=1;
        while(x%y==0 &&(y<=20)){
            if(y==20){
                smallest=x;
             }
            y++;
        }
        x++;
        if(smallest>0){
            break;
        }
    }
    cout<<smallest;
    return 0;
}