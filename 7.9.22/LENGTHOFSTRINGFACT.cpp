#include <bits/stdc++.h>
using namespace std;
 
/* Function to calculate length */
int recLen(char* str)   
{
    // if we reach at the end of the string
    if (*str == '\0')
        return 0;
    else
        return 1 + recLen(str + 1);
}
int fact(int n) {
  if(n > 1)
    return n * fact(n - 1);
  else
    return 1;
}
int factorial(int n){
    long fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
/* Driver program to test above function */
int main()
{   
    char str[100];
    cin.get(str,100);
    //char str[] = "helloa";
    int Len = recLen(str);
    cout<<Len<<"\n";
    if (Len % 2 == 0) 
        cout << factorial(Len);
    else
        cout << recLen(str);
    return 0;
}
/////////////////////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;

long fact(int n){
    long fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int len(char* str) {
   if (*str == '\0')
      return 0;
   else
      return 1 + len(str + 1);
}
int main(){
    char str[100];
    cin.get(str,100);
    cout<<len(str)<<endl;
    if(len(str)%2==0){
        cout<<fact(len(str));
    }else{
     cout<<"Length is odd";
    }
    return 0;
}