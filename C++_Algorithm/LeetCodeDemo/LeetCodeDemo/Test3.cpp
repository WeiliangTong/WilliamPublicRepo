﻿using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
//堆排序
//每次取最大的，和-掉该数，减半该数,重新求和。
//坑:用double
class Solution {
public:
    int halveArray(vector<int>& nums) {
        multiset<double> st;
        double sum = 0,nsum;
        for (int& e : nums) {
            st.insert(-e*1.0);
            sum +=e;
        }
        nsum = sum;
        multiset<double>::iterator pos;
        float val;
        int rst = 0;
        while (2 * nsum > sum) {
            pos = st.begin();
            val = -(*pos);
            st.erase(pos);
            nsum -= val;
            val = val / 2;
            nsum += val;
            st.insert(-val* 1.0);
            rst++;
        }
        return rst;
    }
};