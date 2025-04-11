class Solution {
public:
    bool isAnagram(string s, string t) {
        // nlogn
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t) return true;
        // return false;

        // freq arr tc: O(n)
    vector<int> arr(256, 0);

    for(int i=0; i<s.size(); i++){
        arr[s[i]]++;
    }
    for(int i=0; i<t.size(); i++){
        arr[t[i]]--;
    }
    for(int i=0; i<256; i++){
    if(arr[i] != 0) return false;
    }
    return true;
    }
};