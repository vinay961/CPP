// Map--> it store element with their key value pair

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string,int>mp;
    string str = "vinayRai";

    for(int i=0;i<str.size();i++){
        
    }
    map<string,int>:: iterator i = mp.begin();
    while(i!=mp.end()){
        cout<<i->first<<' '<<i->second<<endl;
        i++;
    }

    return 0;
}