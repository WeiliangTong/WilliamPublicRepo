﻿using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
typedef pair<int, bool> pib;
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
#define MAXN (int)(1e5+1)
#define MAXM (int)(1e5+1)
#define MOD (int)(1e9+7)
//哈希 异或
//按答案最高位枚举异或可能性。
class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int rst = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n && nums[j] <= 2 * nums[i]; j++) {
                rst = max(rst, nums[i] ^ nums[j]);
            }
        }
        return rst;
    }
};