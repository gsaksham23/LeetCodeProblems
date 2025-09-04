#define F first
#define S second
using state = pair<string, int>; 
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // Since the constraints are given such that I don't need to check them
        // BFS is the approach
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        // Code
        queue<state> q;
        q.push({beginWord, 1});
        unordered_set<string> st(wordList.begin(), wordList.end());
        st.erase(beginWord);
        while(!q.empty()){
            string word = q.front().F;
            int step = q.front().S;
            if(word == endWord)return step;
            q.pop();
            for(int i = 0; i < word.size(); i++){
                char original = word[i];
                for(char j = 'a'; j <= 'z'; j++){
                    word[i] = j;
                    if(st.find(word) != st.end()){
                        st.erase(word);
                        q.push({word, step+1});
                    }
                }
                word[i] = original;
            }
        }
        return 0;
    }
};