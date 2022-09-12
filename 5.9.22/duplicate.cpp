#include <iostream>
#include <cstdio>
using namespace std;

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(void)
{
    int arr[9];
    for(int i = 0; i<9; i++){
        cin>>arr[i];
        cout<<arr[i]<<"\n";
    }
    int N = sizeof(arr) / sizeof(arr[0]);
    int result;
    for(int i = 0; i<8; i++){
        int temp ;
        cin>>temp;
        result = search(arr, N, temp);
        if(result == -1){
            cout<<temp<<"\n";
        }
    }

}
