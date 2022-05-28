class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanToIntger;
        romanToIntger.insert(pair<char, int>('I', 1));
        romanToIntger.insert(pair<char, int>('V', 5));
        romanToIntger.insert(pair<char, int>('X', 10));
        romanToIntger.insert(pair<char, int>('L', 50));
        romanToIntger.insert(pair<char, int>('C', 100));
        romanToIntger.insert(pair<char, int>('D', 500));
        romanToIntger.insert(pair<char, int>('M', 1000));
        
        int len = s.length();
        int num=0;
        int sum=0;

        for(int i=0;i<len;){
            if(i == (len-1)){
                num = romanToIntger[s[i]];
                i++;
            }
            else if(romanToIntger[s[i]] < romanToIntger[s[i+1]]){
                num = romanToIntger[s[i+1]] - romanToIntger[s[i]];
                i = i+2;
            }
            else{
                num = romanToIntger[s[i]];
                i++;
            }
            sum = sum + num;
        }

        return sum;
    }
};