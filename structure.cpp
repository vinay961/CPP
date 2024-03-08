// A structure is collection of variables of different data types under a single name.
#include<iostream>
using namespace std;

// How to declare a structure in c++
struct info
{
    string name;
    string dept;
    float marks;
};

int main(){
    info p1;

    // Storing information 
    cout<<"Enter name of student :";
    getline(cin,p1.name);
    cout<<"Enter Dept_Name :";
    getline(cin,p1.dept);
    cout<<"Enter marks obtained :";
    cin>>p1.marks;

    cout<<endl;

    // Displaying information

    cout<<"Name: "<<p1.name<<endl;
    cout<<"Dept_name: "<<p1.dept<<endl;
    cout<<"Marks obtained: "<<p1.marks<<endl;

    return 0;

}
// we are using getline() function to clear the input buffer after reading string.