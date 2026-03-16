//this is a sliding window problem(my first time coming across this one)
//confusing solution, and not the max efficiency(though still O(N)), we need to use an unordered set for faster implementation
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) {return 0;}
        int left = 0;
        int size = 1;
        for(int right = 1; right<s.size(); right++){
            for(int i = left; i < right; i++){
                if(s[i] == s[right]){
                    left = i + 1;
                    break;
                }
            }
            size = max(size, right - left + 1);
        }
        return size;
    }
};
