#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int ans = 0;
		vector<char> check;
		for (auto i = s.begin(); i != s.end(); i++)
		{
			for (auto j = i; j != s.end(); j++)
			{
				if (find(check.begin(), check.end(), *j) == check.end())
					check.push_back(*j);
				else
					break;
			}
			if (ans < check.size())
			{
				ans = check.size();
				check.clear();
			}
			else
			{
				check.clear();
			}
		}
		return ans;
	}
	
};

