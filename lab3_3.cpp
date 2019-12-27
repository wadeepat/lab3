#include<iostream>
using namespace std;

int main(){
float x=6,sum=0;
    while (x<20)
    {
        sum=(1/x)+sum;
        x=x+1;
    }
   cout<<sum;  
    return 0;
}