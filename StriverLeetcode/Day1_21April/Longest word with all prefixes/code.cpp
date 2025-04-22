struct Node{
    Node* links[26];
    bool flag=false;

    bool containsKey(char ch){
        return (links[ch-'a']!=NULL);
    }

    void put(char ch, Node* node){
        links[ch-'a']=node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void setEnd(){
        flag=true;
    }
    
    bool isEnd(){
        return flag;
    }
};

class Trie{
    private:
    Node* root;

    public:
    Trie(){
        root=new Node();
    }

    void insert(string word){
        int n=word.size();
        Node* node=root;
        for(int i=0; i<n; i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();
    }

    bool checkPrefix(string word){
        Node* node=root;
        int n=word.size();
        for(int i=0; i<n; i++){
            if(node->containsKey(word[i])==true){
                node=node->get(word[i]);
                if(node->isEnd()==false) return false;
            }
            else return false;
        }
        return true;
    }
};

class Solution {
public:
    string completeString(vector<string>& nums) {
        Trie trie;
        for (auto& it : nums)
            trie.insert(it);

        string longest = "";
        for (auto& it : nums) {
            if (trie.checkPrefix(it)) {
                if (it.size() > longest.size() || 
                    (it.size() == longest.size() && it < longest)) {
                    longest = it;
                }
            }
        }

        return (longest == "") ? "None" : longest;
    }
};