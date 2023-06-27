/*Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
a. 1 <= nums.length <= 10^4
b. -2^31 <= nums[i] <= 2^31 - 1*/

//Code 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        while(j<n)
        {
            if(nums[j]==0)
                j++;
            else{
                swap(nums[i],nums[j]);
                i++,j++;
            }
        }
    }
};
