#include <iostream>
#include <unordered_set>
using namespace std;

/**
 * MEMBER FUNCTION NAME:
 *    isInputInDictionary
 * PURPOSE:
 *    The following class method that takes the input
 *    string and a dictionary of English words, and
 *    checks to see if the given input is composed of
 *    only the words from the input dictionary
 * PARAMETER:
 *    string* s
 *    unordered_set<string> &dict
 * RETURN VALUE:
 *    bool: returns true if the given input is composed
 *    of only the words from the input dictionary
 */
class Solution
{
    public:
        bool isInputInDictionary(string* s, unordered_set<string> &dict);
};
bool Solution::isInputInDictionary(string* s, unordered_set<string> &dict)
{
    cout << boolalpha;
    string sCopy = *s;

    /// not entirely certain of how this works
    // loop cycles through dict and increments 1 field over from the
    // starting position
        /// the start and ends are arbitrarily assigned
    for(auto i = dict.begin(); i != dict.end(); i++)
    {
        string dictStr = *i;
        // -1 == npos
        if(sCopy.find(dictStr) != -1)
        {
            sCopy.erase(sCopy.find(dictStr), dictStr.length());
        }
    }
    if(sCopy.length() == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    // Example
    Solution solution;
    string input = "joe";
    unordered_set<string> dict = {"joe1","joe"};
    cout << solution.isInputInDictionary(&input, dict);
    cout << endl;

    Solution solution1;
    string input1 = "joey";
    unordered_set<string> dict1 = {"joe1","joe"};
    cout << solution.isInputInDictionary(&input1, dict1);
    cout << endl;

    Solution solution2;
    string input2 = "applepie";
    unordered_set<string> dict2 = {"pie", "apple"};
    cout << solution.isInputInDictionary(&input2, dict2);
    cout << endl;

    Solution solution3;
    string input3 = "hellonow";
    unordered_set<string> dict3 = {"hello", "on", "hell", "now"};
    cout << solution.isInputInDictionary(&input3, dict3);
    cout << endl;

    Solution solution4;
    string input4 = "hellonowl";
    unordered_set<string> dict4 = {"hell", "on", "owl"};
    cout << solution.isInputInDictionary(&input4, dict4);
    cout << endl;

}
