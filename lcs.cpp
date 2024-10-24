#include<iostream>
using namespace std;

class Solution {
  public:
    int lcs(int n, int m, string str1, string str2) {
        int t[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                t[i][j] = -1;
            }
        }
        if(n == 0 || m == 0){
            return 0;
        }
        if(t[n][m] != -1) return t[n][m];
        if(str1[n-1] == str2[m-1]){
            return t[n][m] = (1+lcs(n-1,m-1,str1,str2));
        }
        else{
            return  t[n][m] = max(lcs(n-1,m,str1,str2),lcs(n,m-1,str1,str2));
        }
    }
};

int main(){
    string str1 = "ABCDGH";
    string str2 = "AEDFHR";
    Solution solutionObject;
    int lcs_length = solutionObject.lcs(str1.length(), str2.length(), str1, str2);
    cout<<lcs_length<<endl;

    return 0;
}