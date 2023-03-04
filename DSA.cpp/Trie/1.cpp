#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // assumption all charater in word is capital
        int index = word[0] - 'A';
        TrieNode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // not present
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtils(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchUtils(child, word.substr(1));
    }
    bool serchWord(string word)
    {
        return searchUtils(root, word);
    }

    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i])
            {
                return false;
            }
        }
        return true;
    }

    // Deletion from trie
    bool haveChildren(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i])
            {
                return true;
            }
        }
        return false;
    }

    void deletionHelper(TrieNode *root, string word, int depth)
    {
        if (!root)
        {
            return;
        }

        if (depth == word.length())
        {
            if (root->isTerminal)
            {
                root->isTerminal = false;
            }
            if (!haveChildren(root) && root->isTerminal == false)
            {
                delete (root);
                root = NULL;
            }
            return;
        }

        int index = word[depth] - 'A';
        TrieNode *child = root->children[index];
        deletionHelper(child, word, depth + 1);
    }

    void deletion(string word)
    {
        deletionHelper(root, word, 0);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("KOO");
    t->insertWord("KLOPOO");

    if (t->serchWord("ABCD"))
    {
        cout << " ABCD is present" << endl;
    }
    else
    {
        cout << "ABCD IS not present" << endl;
    }

    t->deletion("KOO");

    if (t->serchWord("KOO"))
    {
        cout << "KOO IS present" << endl;
    }
    else
    {
        cout << "KOO is not present" << endl;
    }

    if (t->serchWord("KLOPOO"))
    {
        cout << "KLOPOO IS present" << endl;
    }
    else
    {
        cout << "KLOPOO is not present" << endl;
    }

    t->deletion("KLOPOO");

    if (t->serchWord("KOO"))
    {
        cout << "KLOPOO IS present" << endl;
    }
    else
    {
        cout << "KLOPOO is not present" << endl;
    }
    return 0;
}