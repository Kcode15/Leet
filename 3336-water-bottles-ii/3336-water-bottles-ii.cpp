class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = 0;
        int emptyBottles = 0;
        
        // Drink all full bottles initially
        ans += numBottles;
        emptyBottles += numBottles;
        numBottles = 0;
        
        // Perform exchanges while possible
        while (emptyBottles >= numExchange) {
            // Exchange exactly numExchange empty bottles for 1 full bottle
            emptyBottles -= numExchange;
            numBottles = 1;
            
            // Drink the new full bottle
            ans += numBottles;
            emptyBottles += numBottles;
            
            // Increase numExchange by 1 after each exchange
            numExchange += 1;
        }
        
        return ans;
    }
};
