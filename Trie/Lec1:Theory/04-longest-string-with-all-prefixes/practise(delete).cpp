#include <bits/stdc++.h> 

struct Node{
    Node* links[26];
    bool flag=false;

    Node* get(char ch){
        return links[ch-'a'];
    }

    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }

    void put(char ch, Node* node){
        links[ch-'a']=node;
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

    void insert(string word){ // O(N*L) N is number of words and L is length of every word
        Node* node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new Node());
            }
            node=node->get(word[i]); // to move forward 
        }
        node->setEnd();
    }

    bool checkifPrefixExists(string word){
        Node* node=root;
        for(int i=0; i<word.size(); i++){
            if(node->containsKey(word[i])){
                node=node->get(word[i]);
                if(node->isEnd()==true){
                    continue;
                }
                else{
                    return false;
                }
            }
            else return false;
        }
        return true;
    }
};

string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie trie;
    for(auto &it:a){
        trie.insert(it);
    }

    string longest="";
    for(auto &it:a){ // ch are the words in the array
        if(trie.checkifPrefixExists(it)){
            if(it.length()>longest.length()){
                longest=it;
            }
            else if(it.length()==longest.length() && it<longest){
                longest=it;
            }
        }
    }
    if(longest=="") return "None";
    else return longest;

}

