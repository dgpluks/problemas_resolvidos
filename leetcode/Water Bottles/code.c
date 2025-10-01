int numWaterBottles(int numBottles, int numExchange) {
    int resp = 0;
    int rest = 0;
    while(numBottles > 0){
        resp += numBottles;
        numBottles +=rest;
        rest = numBottles%numExchange;
        numBottles /= numExchange;
        }
    return resp;
}
