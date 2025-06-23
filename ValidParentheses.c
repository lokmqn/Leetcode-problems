bool isValid(char* s) {
    int len = strlen(s);

    char *stack = malloc(sizeof(char)*(len+1));
    int index = 0;

    for(int i=0; i<len; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack[index++] = s[i];
        }
        else{
            if(index==0) return false;

            if((s[i] == ')' && stack[index-1] == '(')||
               (s[i] == '}' && stack[index-1] == '{')||
               (s[i] == ']' && stack[index-1] == '[')){

                index--;
            }
            else return false;
        }
    }
    if(index == 0) return true;
    return false;
}
