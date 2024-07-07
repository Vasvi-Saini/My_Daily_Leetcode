class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int consume = 0;
       while(numBottles>=numExchange){        //enough bottles to exchange atleast one bottle
        consume += numExchange;              // increase thee count of bottle exchanges
        numBottles -= numExchange;          // decrease the count of bottle by no. of bottle exchanged
        numBottles++;   //add 1 bottle bcz i just exchanged numExchange empty bottles for 1bottle                   
       }
        return consume + numBottles; 
    }
};