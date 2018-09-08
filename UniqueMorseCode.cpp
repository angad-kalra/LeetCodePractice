class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string chars = "abcdefghijklmnopqrstuvwxyz";
        string collection = "";
        unordered_map<char,string> map;
        unordered_set<string> uset;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.", "...","-","..-","...-",".--","-..-","-.--","--.."};
        for (int i=0;i<26;i++)
        {
            map[chars[i]] = morse[i];
        }
        
        for(auto& word:words)
        {
            for(auto& c:word)
            {
                collection += map[c];
            }
            uset.insert(collection);
            collection = "";
        }
        
        return uset.size();
    }
};
