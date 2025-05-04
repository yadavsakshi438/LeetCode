class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result(prices.size());
        stack<int> s;
        for (int i = 0; i < prices.size(); ++i) {
            while (!s.empty() && prices[i] <= prices[s.top()]) {
                int index = s.top();
                s.pop();
                result[index] = prices[index] - prices[i];
            }
            s.push(i);
        }
        while (!s.empty()) {
            result[s.top()] = prices[s.top()];
            s.pop();
        }
        return result;
    }
};