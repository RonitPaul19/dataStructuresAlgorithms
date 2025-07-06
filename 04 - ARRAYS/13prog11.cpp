//longest subarray with given sum k (positives and negatives)
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubArrayWithSumK_BETTER(vector<int> a, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        // Only insert if sum is not already present to keep the earliest index
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int longestSubArrayWithSumKOptimal(vector<int> a, long long k){
    int left =0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n){
        while(left<=right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right<n) //for the last index
            sum += a[right];

    }
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    long long k = 6;
    cout << "Longest subarray length with sum " << k << " is: "
         << longestSubArrayWithSumKOptimal(arr, k) << endl;
    return 0;
}
