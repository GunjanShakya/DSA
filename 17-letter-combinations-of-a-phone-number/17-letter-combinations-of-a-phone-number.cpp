class Solution {
public:
   vector<string> letterCombinations(string digits) {
	if (digits.size() == 0) return {};

	vector<string> numbers = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	vector<string> result = {""};

	for (auto num : digits)
	{
		vector<string> temp;
		for (auto l : numbers[num - '0'])
		{
			for (auto re : result)
			{
				temp.push_back(re + l);
			}
		}
		result = temp;
	}
	return result;
}
};