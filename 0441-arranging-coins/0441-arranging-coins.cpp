class Solution {
public:
    int arrangeCoins(int n) {
        int row = 1;
        while(n >=  row){    // if i have coin equals curr row
            n -= row;       // curr row m coins filled
            row++;          // row updated to fill next row equals coins
        }
        return row - 1;     // row must have moved to one step ahead where the conditipn has terminated
    }
};