Trie data structure 

Implement trie data structure to support these operations:
- insert(word): To check if string 'word' in Trie
- search(word): To check is string 'word' is present in Trie or not
- startsWith(word): To check is there is any string in the Trie that starts with the given prefix string 'word'

Three type of queries denote these operations:
Type 1: To insert a string "word" in Trie.
1 word
Type 2: To check if the string "word" is present in Trie or not.
2 word
Type 3: To check if there is any string in the Trie that starts with the given prefix
string "word".
3 word

Sample Input 1 :
5
1 hello
1 help
2 help
3 hel▶
2 hel

Sample Output 1 :
true
true
false

Explanation To Sample Input 1:
Query 1: "hello" is inserted
Query 2: "help" is inserted
Query 3: "true" is printed as "help" is present
Query 4: "true" is printed as "hello" and "help" is present having the prefix "hel"
Query 5: "false" is printed as "hel" is not present

A trie data structure is a class or a struct(in c++), and they have two member functions (variables)

```c++
trie{
    array a[26];
    bool fl; // fl is flag 
}
```

apple
whenevr you insert a, a will point to another trie node with fl=false
![img1](/Trie/Lec1:Theory/assets/img1.png)
when u come to p, you will insert p in the empty trie and will create a p's reference trie.
![img2](/Trie/Lec1:Theory/assets/img2.png)
now to isert another p, you will now insert p at the empty trie

now traverse similarly till all letters are inserted .. and when u insert the last letter, it would point to an empty trie node with fl=true

Now to insert apps 
we traverse the trie 
a found -> move to next trie node -> p found -> p found -> but now next trie node is l which is not what we require, we thus insert s and create its reference trie with fl=true since the word is complete then

![img3](/Trie/Lec1:Theory/assets/img3.png)






