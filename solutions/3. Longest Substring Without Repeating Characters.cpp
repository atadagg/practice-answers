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

//max speed version with a 128 slot array:

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_seen(128,-1);

        int left = 0;
        int max_size = 0;


        for (int right = 0; right < s.size(); right++){
            char current_char = s[right];

            if(last_seen[current_char] >= left){
                left = last_seen[current_char] + 1;
            }

            last_seen[current_char] = right;

            max_size = max(max_size, right - left + 1);
        }
        return max_size;
    }
};
