#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int length = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> v1;
        for(int i=0;i<length;i++)
        { 
        if(i>0 && (nums[i]==nums[i-1])) continue ; 

            for(int j=i+1;j<length;j++)
            {   
                if(j!=i+1 && (nums[j]==nums[j-1])) continue ; 

                int start =j+1;
                int end = length-1;
                while(start<end)
                {
               long long sum = nums[i]+nums[j]+ nums[start] + nums[end] ;

                if(sum==target)
                {  vector<int> temp = {nums[i], nums[j], nums[start], nums[end]};
                    v1.push_back(temp);
                    start++;
                    end--;

                    while(start<end && nums[start]==nums[start -1]) start++;
                    while(start<end && nums[end]==nums[end+1]) end--;
                }
                else if(sum>target)
                {
                    end--;
                }
                else{
                    start++;
                }
                }

             }
        }
        return v1;
    }