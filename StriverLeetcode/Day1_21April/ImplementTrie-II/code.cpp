struct Node{
    Node* links[26];
    int countprefix=0;
    int countend=0;
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
};

class Trie {
    private:
        Node* root;

	public:
	    Trie() {
            root=new Node();
	    }

	    void insert(string word) {
            int n=word.size();
            Node* node=root;
            for(int i=0; i<n; i++){
                if(!node->containsKey(word[i])){
                    node->put(word[i], new Node());
                }
                node=node->get(word[i]);
                node->countprefix++;
            }
            node->setEnd();
            node->countend++;
    	}

	    int countWordsEqualTo(string word) {
            int n=word.size();
            Node* node=root;
            for(int i=0; i<n; i++){
                if(!node->containsKey(word[i])){
                    return 0;
                }
                else{
                    node=node->get(word[i]);
                }
            }
            return node->countend;
    	}

	    int countWordsStartingWith(string word) {
            int n=word.size();
            Node* node=root;
            for(int i=0; i<n; i++){
                if(!node->containsKey(word[i])){
                    return 0;
                }
                else{
                    node=node->get(word[i]);
                }
            }
            return node->countprefix;
    	}

	    void erase(string word) {
            int n=word.size();
            Node* node=root;
	        for(int i=0; i<n; i++){
                if(node->containsKey(word[i])){
                    node=node->get(word[i]);
                    node->countprefix--;
                }
            }
            node->countend--;
	    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * int param_2 = obj->countWordsEqualTo(word);
 * int param_3 = obj->countWordsStartingWith(prefix);
 * obj->erase(word);
 */