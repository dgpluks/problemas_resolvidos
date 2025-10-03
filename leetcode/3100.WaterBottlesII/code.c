int maxBottlesDrunk(int numBottles, int numExchange) {
    int resp = numBottles;
    int full = 0;
    while(numBottles >= numExchange){
        numBottles -= numExchange;
        numBottles++;
        resp++;
        numExchange++;
    }
    return resp;
}
