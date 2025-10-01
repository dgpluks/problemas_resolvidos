int climbStairs(int n) {
    int v[46];
    v[0]=0; v[1]=1;v[2]=2;
    if(n<=1){
        return v[n];
    }
    for(int i=3; i<=n;++i){
        v[i]=v[i-1]+v[i-2];
    }return v[n];
}
