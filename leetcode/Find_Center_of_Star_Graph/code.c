int findCenter(int** edges, int edgesSize, int* edgesColSize) {
    int a = edges[0][0],b = edges[0][1],c = edges[1][0], d = edges[1][1];
    if(a == c){
        return a;
    }else if(a == d){
        return a;
    }else{
        return b;
    }
}
