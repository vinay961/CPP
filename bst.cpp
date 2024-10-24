#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Use lower_bound to find the iterator
    auto it = upper_bound(arr.begin(), arr.end(), 3);
    
    // Calculate the index of the iterator
    int index = arr.end()-it;
    
    // Print the index
    cout << "Index of the first element not less than 3: " << index << endl;
    
    return 0;
}
