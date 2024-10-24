#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 1, 3, 3, 5};
    int xorAll = 0;
    for(int i : nums) {
        xorAll ^= i;
    }
    cout << xorAll << endl;
    return 0;
}
