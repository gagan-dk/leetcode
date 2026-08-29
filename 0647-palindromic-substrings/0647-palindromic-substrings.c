bool ispalindrome(char*s,int left,int right){
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}




int countSubstrings(char* s) {

    int n=strlen(s);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
          if (ispalindrome(s,i,j)){
            count++;
          }
        }
    }
    return count;
}









    
