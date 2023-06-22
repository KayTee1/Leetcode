#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
    int num1{}, num2{};
    for(int i = 0; i < nums.size(); i++){
        int answer{};
        num1 = nums[i];
        for(int j = 0; j < nums.size(); j++){
            num2 = nums[j];
            if(i != j){
                answer = num1 + num2;
                if(answer == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums{2,7,11,15};
    int target{9};

    for(auto& elem : twoSum(nums, target)){
        cout << elem << endl;
    }
}
