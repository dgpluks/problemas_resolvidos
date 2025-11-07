void expo(char **c, int *t){
    char *niw = malloc(sizeof(char)**t*2);
    for(int i = 0; i < t; i++){
        niw[i] = (*c)[i];
    }
    free(*c);
    *c = niw;
    free(niw);
    *t *= 2;
}
int lengthOfLongestSubstring(char* s) {
    int t = 1000;
    char *chares = malloc(t*  sizeof(char));
    int i = 0;
    while(s[i] != '\0'){
        if(((int)s[i]) >= t ){
            expo(&chares,&t );
        }
        if(chares[((int)s[i])] == s[i]){
            return i;
        }else{
            chares[i] = s[i];
        }
        printf("%c %c\n", chares[(int)s[i]], s[i]);
        i++;
    }
    return i;
}
