struct Node{
    Node* links[26];
    bool flg = false;
};

class Trie {

public:
    Node* root;
    /** Initialize your data structure here. */
    Trie() {
        root = new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* cur = root;
        for(auto c : word){
            if(cur->links[c - 'a'] != NULL) cur = cur->links[c - 'a'];
            else{
                Node* next = new Node();
                cur->links[c - 'a'] = next;
                cur = cur->links[c - 'a'];
            }
        }
        cur->flg = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* cur = root;
        for(auto c : word){
            if(cur->links[c - 'a'] == NULL) return 0;
            cur = cur->links[c - 'a'];
        }
        return cur->flg;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node* cur = root;
        for(auto c : prefix){
            if(cur->links[c - 'a'] == NULL) return 0;
            cur = cur->links[c - 'a'];
        }
        return 1;
    }
};
