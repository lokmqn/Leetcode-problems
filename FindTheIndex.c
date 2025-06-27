int strStr(char* haystack, char* needle) {
    int needle_size=0;
    while(*(needle+needle_size))
        needle_size++;

    int i=0;
    int j=0;
    while(*(haystack+i)){
        if(*(haystack+i) == *(needle+j)){
            j++;
        }else{
            i=i-j;
            j=0;
        }
        i++;
        if(j == needle_size ){
            return i-j;
        }
    }
    return -1;
}
