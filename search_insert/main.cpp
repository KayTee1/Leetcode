#include <iostream>
#include <vector>
using namespace std;

// 1 3 5 6
// 2
// temp = 1
int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, mid;

    if (target > nums[high]) {
        return high + 1;
    }

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (target == nums[mid]) {
            return mid;
        }
        else if (target < nums[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}


int main(){
    vector<int> nums = {1,3,4,5};
    int target = 2;

    cout << "Target is positioned at index: " << searchInsert(nums, target) << endl;
    

    return 0;
}