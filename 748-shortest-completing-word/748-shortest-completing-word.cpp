class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> m;
        for(auto x: licensePlate){
            if((x>='A' && x<='Z') || (x>='a' && x<='z'))
                m[tolower(x)]++; //converting all to lower case and storing in map
        }
        string answer = string(16, 'a');
        for(auto word: words){
            unordered_map<char, int> mm;
            for(auto x: word){
                if((x>='A' && x<='Z') || (x>='a' && x<='z'))
                    mm[tolower(x)]++;
            }
            bool cant = false;
            for(char i='a';i<='z';i++) //iterating from a to z
                if(mm[i] < m[i]) //comapring the no. of time letter occur on both license and words
                    cant = true;
            if(!cant){
                if(word.length() < answer.length())
                    answer = word;
            }
        }
        return answer;
    }
};