//TC : O(N)
//MC : O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int frequency_in_sArray[26]={0};
        int frequency_in_tArray[26]={0};
        
        for(int i=0; i<s.length();i++){
            frequency_in_sArray[s[i]-'a']+=1;
            frequency_in_tArray[t[i]-'a']+=1;
        }
        for(int i=0; i<26;i++){
            if(frequency_in_sArray[i]!=frequency_in_tArray[i]){
                return false;
            }
        }
        return true;
    }
};