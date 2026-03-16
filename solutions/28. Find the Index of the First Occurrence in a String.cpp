class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i<haystack.size(); i++){
            int curr = i;
            for(int j = 0; j < needle.size(); j++){
                if(haystack[curr] != needle[j]){
                    break;
                }
                curr++;
                if(j == needle.size() - 1){return i;}
                if(curr == haystack.size()){return -1;}
            }
        }
        return -1;
    }

};

// Hacky C++ 20 way below

class Solution {
public:
    int strStr(string haystack, string needle) {
    size_t found = haystack.find(needle);
    return (found != string::npos) ? (int)found : -1; //npos: No Position, null for find() because size_t can't be negative
    }
};
