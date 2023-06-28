#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

    int threeSumClosest(vector<int>& nums, int target) {
        // using two pointer approach 
        sort(nums.begin(),nums.end());
        int length = nums.size();
        int min = INT_MAX;
        int ans;

        for(int i=0;i<nums.size();i++)
        {   int first = nums[i];
            int start = i+1;
            int end = length-1;
            while(start<end)
            {
                int sum = nums[i]+nums[start]+nums[end];
               if(sum == target)
               {
                   return target;
               }
               else if(abs(sum-target) < min)
                {
                    min = abs(sum-target);
                     ans = sum;
                }

                if(sum>target)
                {
                    end--;
                }
                else{
                    start++;
                }
            }
        }
         return ans;
      
    }
