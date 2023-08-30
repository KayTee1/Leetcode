#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxSize = 0 ;

    while(left < right){
        int minHeight = min(height[left], height[right]);
        int width = right - left;
        int containerSize = minHeight * width;

        maxSize = max(maxSize, containerSize);

        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return maxSize;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << 
        "Max amount of water this container can store is: " 
            << maxArea(height) << endl;

    return 0;
}

