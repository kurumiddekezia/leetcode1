class Solution {
     unordered_map<int, int> map;
    int zeros;
    int n, m;
public:
    Solution(int m, int n) {
        this->m = m;
        this->n = n;
        zeros = m * n;
        
    }
    
    vector<int> flip() {
         int r = rand() % zeros;

        // Map r to its current actual position (if already flipped, use its remapped value)
        int actual = map.count(r) ? map[r] : r;

        // Calculate the row and column indices for the returned value
        vector<int> ret = {actual / n, actual % n};

        // Update the map to remap the current random index to the last available index
        map[r] = map.count(zeros - 1) ? map[zeros - 1] : zeros - 1;

        // Decrease the available slots
        zeros--;

        return ret;
        
    }
    
    void reset() {
        map.clear();
        zeros = m * n; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */