#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string longestPalindrome(string s) {
		bool isPalindrome;
		string longest;
		longest = s[0];

		//situation abcba
		for (int i = 1; i < s.size(); i++) {
			string str = "";
			isPalindrome = true;
			int j = 1;
			while (i - j >= 0 && i + j < s.size()) {
				if (s[i + j] != s[i - j]) {
					isPalindrome = false;
					break;
				}
				if (isPalindrome) {
					for (int begin = i - j, end = i + j; begin <= end; begin++) {
						str = str + s[begin];
					}
					if (str.size() > longest.size()) {
						longest = str;
					}
				}
				str = "";
				j++;
			}
		}

		//situation abba
		for (int i = 0; i < s.size(); i++) {
			string str = "";
			isPalindrome = true;
			int j = 0;
			while (i - j >= 0 && i + j + 1 < s.size()) {
				if (s[i - j] != s[i + j + 1]) {
					isPalindrome = false;
					break;
				}
				if (isPalindrome) {
					for (int begin = i - j, end = i + j + 1; begin <= end; begin++) {
						str = str + s[begin];
					}
					if (str.size() > longest.size()) {
						longest = str;
					}
					str = "";
				}
				j++;
			}
		}

		return longest;
	}
};