#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size() - 1;

    for (int i = n; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            return digits;
        }
    }

    digits.insert(digits.begin(), 1); 
    return digits;
}

int main()
{
    vector<int> nums = {9, 2, 3, 9};
    vector<int> ans = plusOne(nums);

    int ans_size = ans.size();

    cout << "[ ";
    for (int i = 0; i < ans_size; i++)
    {
        if (i != ans_size - 1)
        {
            cout << ans[i] << ", ";
        }
        else
        {
            cout << ans[i];
        }
    }
    cout << " ]" << endl;

    return 0;
}