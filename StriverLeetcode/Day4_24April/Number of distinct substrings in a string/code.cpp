// TC:O(N^2 x log(M))
class Solution {    
    public:
        int countDistinctSubstring(const string& s) {
            int n = s.size();
            set<string> substrings;   
    
            for (int i = 0; i < n; ++i) { // O(N)
                string str;             
                for (int j = i; j < n; ++j) { // ~~O(N)
                    str.push_back(s[j]); // OR str=str+s[j]
                    substrings.insert(str); // O(log(M)) where M is number of elements in set
                }
            }
    
            return substrings.size();
        }
    };

// Method 2 - Trie 
struct Node {
    Node* links[26];
    
    bool containsKey(char ch){
        return links[ch - 'a']!=NULL;
    }

    Node* get(char ch){
        return links[ch - 'a'];
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }
};

class Solution{
public:
    int countDistinctSubstring(const string& word) {
        int cnt = 0;
        Node* root = new Node();

        int n = word.size();
        for (int i = 0; i < n; i++) {
            Node* node = root;
            for (int j = i; j < n; ++j) {
                char ch = word[j];
                if (!node->containsKey(ch)) {
                    node->put(ch, new Node());
                    cnt++;              
                }
                node = node->get(ch);
            }
        }
        return cnt + 1;
    }
};
    