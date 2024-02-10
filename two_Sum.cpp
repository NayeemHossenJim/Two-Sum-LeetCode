#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector <int> result;
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            sort(nums.begin(), nums.end());
            int sum = nums[left] + nums[right];
            if (sum == target)
            {
                result.push_back(left +1);
                result.push_back(right +1);
                return {left, right};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return{};
    }     
};
int main()
{
    vector<int> nums = {2,7,11,15};
    int target=9;
    vector<int> result = Solution().twoSum(nums,target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i]<< endl ;
    }
}