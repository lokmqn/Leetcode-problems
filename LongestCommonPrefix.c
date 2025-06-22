char* longestCommonPrefix(char** strs, int strsSize) {
    char *str = malloc(sizeof(char)*201);

    int i=0;
    for(; i<strlen(strs[0]); i++){
        for(int j=0; j<strsSize; j++){
            if(strs[j][i] == strs[0][i]){
                continue;
            }
            else{
                str[i] = '\0';
                return str;
            }
        }
        str[i] = strs[0][i];
    }
    str[i] = '\0';
    return str;
}
