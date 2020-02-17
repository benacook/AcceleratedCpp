#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{    
    //3-4
    typedef vector<string>::size_type vec_sz;

    vector<string> words;
    vector<int> wordCount;
    cout << "enter a scentance:";
    string s;
    while (cin >> s && s != "exit")
    {
        bool exists = false;
        for(vec_sz i = 0; i < words.size(); i++){
            if(s == words[i]){
                ++wordCount[i];
                exists = true;
            }
        }

        if(!exists){
            words.push_back(s);
            wordCount.push_back(1);
        }
    }

    string longestWord = "";
    for(vec_sz i = 0; i < words.size(); i++){
        
        longestWord = words[i].size() > longestWord.size()?
        words[i] : longestWord;
    }

    cout << "Longest word: " << longestWord << endl;
}