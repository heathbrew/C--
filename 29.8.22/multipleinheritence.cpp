#include <iostream>
#include<cstdio>
#include <string>
using namespace std;
class person{
    public : string employeename,address,city;
    public : int age;
};
class employee : virtual public person{
    public : int employeeid;
    public : string department;
};
class faculty: virtual public employee  {
    public : int teachinghours;
    public : string subjects;
};
int main(){
    faculty f;
    cin>>f.employeename;
    cin>>f.employeeid;
    cin>>f.address;
    cin>>f.city;
    cin>>f.age;
    cin>>f.employeeid;
    cin>>f.department;
    cin>>f.subjects;
    cin>>f.teachinghours;
    cout<<"Employee name: "<<f.employeename;
    cout<<"Address:"<<f.address;
    cout<<"City:"<<f.city;
    cout<<"Age:"<<f.age;
    cout<<"Employee Id:"<<f.employeeid;
    cout<<"Department:"<<f.department;
    cout<<"Subjects:"<<f.subjects;
    cout<<"Teaching hrs:"<<f.teachinghours;
    
    
}
