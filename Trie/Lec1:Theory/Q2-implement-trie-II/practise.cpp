#include <bits/stdc++.h> 
struct Node{
    Node* links[26];
    int cnt_end=0;
    int cnt_prefix=0;

    bool containsKey(char ch){
        return (links[ch-'a']!=NULL);
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void put(char ch, Node* node){
        links[ch-'a']=node;
    }
};

class Trie{

    private:
    Node* root;

    public:

    Trie(){
        // Write your code here.
        root=new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new Node());
            }
            node=node->get(word[i]);
            node->cnt_prefix++;
        }
        node->cnt_end++;
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                return 0;
            }
            node=node->get(word[i]);
        }
        return node->cnt_end;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                return 0;
            }
            node=node->get(word[i]);
        }
        return node->cnt_prefix;
    }

    void erase(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                return;
            }
            node=node->get(word[i]);
            node->cnt_prefix--;
        }
        node->cnt_end--;
    }
};












