class DataStream {
public:
int count=0;
int val,key;
    DataStream(int value, int k) {
        count=0;
        val=value;
        key=k;
        
    }
    
    bool consec(int num) {
        if(num==val)
        {
            count++;
        }else
        {
            count=0;
        }
        if(count>=key)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */