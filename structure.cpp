#include <iostream>
#include<stack>
#include <sstream>
using namespace std;

string simplifyPath(string path) {
    stack<string> st;
    stringstream ss(path);
    string token;
    
    while (getline(ss, token, '/')) {
        cout<<token<<endl;
        if (token == "." || token == "") {
            continue;
        }
        if (token == "..") {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            st.push(token);
        }
    }

    string result = "";
    while (!st.empty()) {
        result = "/" + st.top() + result;
        st.pop();
    }
    return result.empty() ? "/" : result;
}

int main() {
    string path = "/home/user/Documents/../Pictures";
    cout << simplifyPath(path) << endl;

    return 0;
}