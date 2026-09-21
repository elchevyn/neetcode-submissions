class Solution {
public:
    bool isAnagram(string s, string t) {
        bool anagram = true;
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        if(s != t){
            anagram = false;
        }
        return anagram;
    }
};
