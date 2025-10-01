int differenceOfSums(int n, int m) {
        int qnd=0;
        qnd=n/m;
        return n*(n+1)/2-qnd*(qnd+1)*m;
}
