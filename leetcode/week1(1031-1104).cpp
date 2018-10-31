//
//  week1(1031-1104).cpp
//  leetcode
//
//  Created by Zhou,Weikang on 2018/10/31.
//  Copyright © 2018年 Zhou,Weikang. All rights reserved.
//

#include "week1(1031-1104).hpp"
#include <vector>

using namespace std;

class Solution {
public:
    //https://leetcode.com/problems/remove-element/description/
    int removeElement(vector<int>& nums, int val) {
        int num = (int)nums.size() - 1;
        int i = 0;
        while(i <= num)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[num];
                num--;
            } else {
                i++;
            }
        }
        return (int)i;
    }
};
