#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int day, month, year;
    struct tm date = {0};
   
    cin>>day>>month>>year;
    date.tm_year = year-1900;
    date.tm_mon  = month-1;
    date.tm_mday = day;
    time_t normal = mktime(&date);
    time_t current;
    time(&current);
    int age = (difftime(current, normal) + 86400L/2) / 86400L;
    cout<<"The person is "<<age/365<<" years old.";
    return 0;
}