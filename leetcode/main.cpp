//
//  main.cpp
//  leetcode
//
//  Created by Zhou,Weikang on 2018/10/31.
//  Copyright © 2018年 Zhou,Weikang. All rights reserved.
//

#include <iostream>
#include "week1(1031-1104).hpp"
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums1.empty())
        {
            return {};
        }
        vector<int>result = {};
        for (int i=0; i<nums1.size(); i++)
        {
            for (vector<int>::iterator iter = nums2.begin(); iter != nums2.end(); iter++)
            {
                if (nums1[i] == *iter)
                {
                    result.push_back(nums1[i]);
                    nums2.erase(iter);
                    break;
                }
            }
        }
        return result;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    Solution *solution = new Solution();
    vector<int>nums2 = {2, 2};
    vector<int>nums1 = {1, 2, 2, 1};
    vector<int>result = solution->intersect(nums1, nums2);
    for (int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
