//
//  week2(1105-1111).cpp
//  leetcode
//
//  Created by Zhou,Weikang on 2018/11/5.
//  Copyright © 2018 Zhou,Weikang. All rights reserved.
//

#include "week2(1105-1111).hpp"
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
//https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
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
