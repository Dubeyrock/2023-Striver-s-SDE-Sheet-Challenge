Stock Buy and Sell
Edit

Intuition: We will linearly travel the array. We can maintain a minimum from the start of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.

Approach:

Create a variable maxPro and store 0 initially.
Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
Run a for loop from 0 to n.
Update the minPrice if it is greater than the current element of the array
Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
Return the maxPro.

int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // initalize step two variables 
        int n = prices.size();
        // max right initalize
        int maxRight = prices[n-1];
        int maxProfit = 0;
        
        for (int i = n-2; i>=0; i--){
            // update maxright. 
            maxRight = max(prices[i], maxRight);
            // update maxProfit .
            maxProfit = max(maxProfit, maxRight - prices[i]);
        }
        return maxProfit;
    }
};

