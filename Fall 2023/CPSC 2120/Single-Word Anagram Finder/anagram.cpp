/*
 * Name: Kaylee Pierce
 * Date Submitted: 10/27/2023
 * Assignment Name: Single-Word Anagram Finder
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> loadWordlist(string filename);

/*Implement the following function:
  anagram() takes a word (string) and a wordlist of all words (vector of strings)
  and builds a dictionary/map where the key is a specific number of times each
  letter occurs in a word and the associated value is a vector of strings
  containing all words using those letters (anagrams).
  The value returned is a vector of strings containing the corresponding
  set of anagrams
*/
vector<string> anagram(string word, vector<string> wordlist);
bool isAnagram(string string1, string string2);



/*int main()
{
    vector<string> words;
    vector<string> anagrams;
    string inputWord;
    words=loadWordlist("wordlist.txt");
    cout << "Find single-word anagrams for the following word: ";
    cin >> inputWord;
    anagrams = anagram(inputWord, words);
    for (int i=0; i<anagrams.size(); i++)
    {
        cout << anagrams[i] << endl;
    }
    return 0;
}*/

vector<string> loadWordlist(string filename)
{
    vector<string> words;
    ifstream inFile;
    string word;
    inFile.open(filename);
    if(inFile.is_open())
    {
        while(getline(inFile,word))
        {
            if(word.length() > 0)
            {
                words.push_back(word);
            }
        }
        inFile.close();
    }
    return words;
}


vector<string> anagram(string word, vector<string> wordlist) {
    vector<string> anagrams;
    for(int i = 0; i < wordlist.size(); i++) {
        if(word.length() == wordlist[i].length()) {
            if(isAnagram(word, wordlist[i]) == true) {
                anagrams.push_back(wordlist[i]);
            }
        }
    }
    return anagrams;
}

// Check for anagram conditons
bool isAnagram(string string1, string string2) {
    if(string1.length() != string2.length()) { // Make sure two words are the same length
        return false;
    }

    sort(string1.begin(), string1.end()); // Sort the words
    sort(string2.begin(), string2.end()); // Sort the words

    return string1 == string2; 
}
