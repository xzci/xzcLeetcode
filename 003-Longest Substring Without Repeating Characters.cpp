#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


/*Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, 

"pwke" is a subsequence and not a substring.*/
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

int main()
{
	Solution s; 

	string ss = "jbpnbwwd";
	cout << s.lengthOfLongestSubstring(ss);
	system("pause");
	return 0;
}