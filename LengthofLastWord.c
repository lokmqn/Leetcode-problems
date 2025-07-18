int lengthOfLastWord(char* s) {
        int n = strlen(s), len = 0;
        bool untilSpace = false;
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                len++;
                untilSpace = true;
            } else if (untilSpace)
                break;
        }

        return len;
}
