#include<iostream>
using namespace std;
class Person{
private:
    string name,gen;
    int Gen;
    char gender;
    public:Person(string name,string gen){
        cout<<"Details of student1:"<<name<<",";
        if (gen=="Male"){
        gender='M';}
        cout<<gender<<endl; 
    }
    public:Person(string name, int Gen){
    cout<<"Details of student3:"<<name<<",";
    if (Gen==1){
    gender='M';
    }
    cout<<gender<<endl;
    }
    public:Person(string name, char gender){
    cout<<"Details of student2:"<<name<<",";
    cout<<gender<<endl;
    }
};
int main(){
string a,b,c,d;
int e;
char f;
Person obj1("Amit","Male");
Person obj2("Neha",'F');
Person obj3("Mukesh",1);
}