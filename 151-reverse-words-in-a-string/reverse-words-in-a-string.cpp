class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream iss(s);
        std::vector<std::string> words;
        std::string word, result;

        while (iss >> word) {
            words.push_back(word);
        }

        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i];
            if (i > 0) result += " "; 
        }

        return result;
    }
};