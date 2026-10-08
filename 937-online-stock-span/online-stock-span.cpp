class StockSpanner {
public:
    vector<int> price;
    stack<int> s;
    int i;

    StockSpanner() {
        i = 0;
    }

    int next(int p) {
        price.push_back(p);
        int ans;

        while (s.size() > 0 && price[s.top()] <= p) {
            s.pop();
        }
        if (s.empty()) {
            ans = i + 1;
        }
        else {
            ans = i - s.top();
        }
        s.push(i);
        i++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */