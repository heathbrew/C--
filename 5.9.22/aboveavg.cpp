#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    float arr[8];
    for(int i = 0; i<8; i++){
        cin>>arr[i];
    }
    
     double max=0;
    double min=110;
    for(int i =0;i<8;i++){
        if(max<arr[i]){
        max=arr[i];}
        else if(min>arr[i]){
        min=arr[i];}}
    float avg = (min+max)/2;
    //cout<<avg<<"\n";
    int num = 0;
     for(int i = 0; i<8; i++){
         double temp = arr[i];         
         if(arr[i]>avg){
             num++;
         //cout<<temp<<"\n";
         }
        //cin>>arr[i];
     } 
    cout<<num;

}
