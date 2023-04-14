#include "Solution.cpp"

int main() {
	string s;
	Solution S1;
	s = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababa";
	cout << S1.longestPalindrome(s) << endl;//Time Limit Exceeded
	s = "abcbe";
	cout << S1.longestPalindrome(s) << endl;
	s = "aaaa";
	cout << S1.longestPalindrome(s) << endl;
	s = "cbbd";
	cout << S1.longestPalindrome(s) << endl;
	s = "BB";
	cout << S1.longestPalindrome(s) << endl;
	s = "babad";
	cout << S1.longestPalindrome(s) << endl;
}