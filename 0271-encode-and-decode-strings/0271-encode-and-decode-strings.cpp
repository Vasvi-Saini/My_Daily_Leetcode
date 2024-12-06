class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded_str;

        for( auto &s: strs){
            
            for( char c: s){
                if(c == '/'){
                    encoded_str += "//";
                }
                else encoded_str += c;
            }

            encoded_str += "/:";
        }
        return encoded_str;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {

        string curr_str;
        int n = s.size();
        vector<string> decoded_str;

        for(int i=0; i<n; i++){
            if(i < n-1 && s[i] == '/' && s[i+1] == ':'){
                decoded_str.push_back(curr_str);
                 curr_str.clear();          // for the next string
                i += 1;                 // 1 index  step forward
            }
            
            else if( i<n-1 && s[i] =='/' && s[i+1] == '/'){
                curr_str += '/';
                i += 1;
            }
            else curr_str += s[i];
        }
    
    return decoded_str;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));