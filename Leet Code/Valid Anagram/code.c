bool isAnagram(char* s, char* t) {
    char letras[27], count[26];
    for(int i=0; i<27; i++){
        if(i==26){
            letras[i]='\0';
        }else{
            letras[i]='0';
            count[i]=0;
        }
    }
    int i=0;
    while(s[i]!='\0'){
        int j=0;
        while(letras[j]!='0'&& letras[j]!=s[i]){
            j++;
        }
        letras[j]=s[i];
        count[j]+=1;
        i++;
    }
    i=0;
    while(t[i]!='\0'){
        int j=0;
        while(letras[j]!='\0' && letras[j]!=t[i]){
            j++;
        }
        if(letras[j]=='\0'){
            return 0;
        }else if(letras[j]==t[i]){
            if(count[j]==0){
                return 0;
            }else{
                count[j]-=1;
            }
        }
        i++;
    }
    for(int j=0;j<26;j++){
        if(count[j]!=0){
            return 0;
        }
    }
    return 1;
}
