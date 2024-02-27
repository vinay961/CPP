// when two or more function have same name but there arguments are different then we say them function overloading.it doesn't matter wether their return type is same or not.

#include<iostream>
using namespace std;

void printer(string name){
        cout<<name<<" Good morning.";
}
void printer(int age){
        cout<<"I am "<<age<<" year's old.";
}
int main(){
    string name = "Vinay";
    int age = 21;
    printer(name);
    return 0;
}

// In cpp many standard library function are overloaded, for example sqrt()--> which can take int, float, etc this happen because it is overloaded.