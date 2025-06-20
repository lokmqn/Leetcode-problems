bool isPalindrome(int x) {
    if(x<0 || x!=0 && x%10==0){
        return false;
    }
    int polinumber = 0 ;
    while(x > polinumber){
        polinumber = polinumber*10 + x%10;
        x/=10;
    }
    return (x==polinumber || x==polinumber/10);
}
