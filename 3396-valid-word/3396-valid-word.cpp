class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;
        int count = 0, flag = 1, num = 0, vow = 0, cons= 0;

        for (int i = 0; i < word.size(); i++) {
            if(word[i] == '$' || word[i] == '@' || word[i] == '#' ) flag = 0;
            if (word[i] > 47 && word[i] < 58)  num = 1; // 0 to 9

            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || 
            word[i] == 'u' ||  word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U' ) vow = 1;  // vowel should be atleast one

            if(word[i] >= 65 && word[i] <= 90 && word[i] != 'A' && word[i] != 'E' &&  word[i] != 'I' && 
            word[i] != 'O' && word[i] != 'U' )  cons = 1;

            if(word[i] >= 97 && word[i] <= 122 && word[i] != 'a' && word[i] != 'e' &&  word[i] != 'i' && 
            word[i] != 'o' && word[i] != 'u' )  cons = 1;  // cons should be atleast one
        }
        if(flag == 0) return false;
        if(flag==1 && cons==1 && vow==1) return true;
        return false;
    }
};
