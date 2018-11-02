//
//  week1(1031-1104).cpp
//  leetcode
//
//  Created by Zhou,Weikang on 2018/10/31.
//  Copyright © 2018年 Zhou,Weikang. All rights reserved.
//

#include "week1(1031-1104).hpp"
#include <vector>
#include <string>

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
    
//https://leetcode.com/problems/shortest-palindrome/description/
    string shortestPalindrome(string s) {
        if (s.size() <= 1)
        {
            return s;
        }
        int begin = 0;
        int end = (int)s.size() - 1;
        while(begin <= end)
        {
            int i = begin; int j = end;
            while(i < j)
            {
                if (s[i] == s[j] && i < j-1)
                {
                    i++;
                    j--;
                } else {
                    break;
                }
            }
            if (s[i] == s[j]) break;
            end--;
        }
        if (end == s.size() - 1)
        {
            return s;
        }
        string s1 = s.substr(end+1, s.size()-1);
        reverse(s1.begin(), s1.end());
        return s1+s;
    }

};
