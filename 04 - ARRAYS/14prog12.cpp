#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Check if 2 elements from the array add up to sum "target"
string read(int n, vector<int> book, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = book[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}

// Return indices of the elements which sum up to target
vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int more = target - num;
        if (mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter target sum: ";
    cin >> target;

    // Check if any two numbers sum to target
    string result = read(n, arr, target);
    cout << "Is there a pair that sums to target? " << result << endl;

    // Find indices of the pair
    vector<int> indices = twoSum(arr, target);
    if (indices[0] != -1)
        cout << "Indices of elements that sum to target: " << indices[0] << " and " << indices[1] << endl;
    else
        cout << "No such pair found." << endl;
    return 0;
}
