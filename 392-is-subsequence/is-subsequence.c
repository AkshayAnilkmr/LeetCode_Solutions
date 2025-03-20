bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;
    
    while (s[i] && t[j]) {
        if (s[i] == t[j]) {
            i++;  // Move to the next character in s
        }
        j++;  // Always move to the next character in t
    }
    
    return s[i] == '\0';  // If we matched all characters of s, return true
}