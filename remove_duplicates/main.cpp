#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int j = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}


int main() {
    vector<int> nums = {1, 1, 2};
    vector<int> expectedNums = {1, 2};

    int k = removeDuplicates(nums);

    for (int i = 0; i < k; i++) {
        if (nums[i] != expectedNums[i]) {
            cerr << "Expected " << expectedNums[i] << ", got " << nums[i] << endl;
            return 1;
        }
    }

    cout << "Test passed!" << endl;
    return 0;
}
