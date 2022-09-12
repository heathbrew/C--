#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int sumAscii(string str, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
            sum += (int)(str[i]);
    }
    return sum;
}
int main()
{
    string str1 = "Raju" ;
    string str2 = "Singh";
    //cin>>str1;
    //cin>>str2;
    int n1 = str1.size();
    int n2 = str2.size();
    cout << (int)(sumAscii(str1, n1)+sumAscii(str2, n2)); 
    return 0;
}