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
    getline(cin,f.employeename);
    cin>>f.employeeid;
    getline(cin,f.address);
    getline(cin,f.city);
    cin>>f.age;
    cin>>f.employeeid;
    getline(cin,f.department);
    getline(cin,f.subjects);
    cin>>f.teachinghours;
    cout<<"Employee name: "<<f.employeename;
    cout<<"\nAddress:"<<f.address;
    cout<<"\nCity:"<<f.city;
    cout<<"\nAge:"<<f.age;
    cout<<"\nEmployee Id:"<<f.employeeid;
    cout<<"\nDepartment:"<<f.department;
    cout<<"\nSubjects:"<<f.subjects;
    cout<<"\nTeaching hrs:"<<f.teachinghours;
    
    
}
