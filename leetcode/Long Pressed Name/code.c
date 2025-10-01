bool isLongPressedName(char* name, char* typed) {
    int i=0, j=0;
    while(name[i]!='\0'){
        if(name[i]==typed[j]){
            if(name[i+1]==name[i]){
                if(typed[j]==typed[j+1] && typed[j]==name[i]){
                    j++;
                }else{
                    return 0;
                }
            }else{
                while(name[i]==typed[j]){
                    j++;
                }
            }
            
        }else{
            return 0;
        }
        i++;
    }
    if(typed[j]!='\0' && typed[j]!=typed[j-1]){
        return 0;
    }else{
        return 1;
    } 
}
