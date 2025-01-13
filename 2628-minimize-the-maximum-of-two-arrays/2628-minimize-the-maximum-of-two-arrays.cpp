class Solution {
public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long l = 1, r = 1e15, ans = r, d1 = divisor1, d2 = divisor2, cnt1 = uniqueCnt1, cnt2 = uniqueCnt2;
        long long g= __gcd(d1, d2), lcm = (d1 * d2) / g;
        while(l <= r){
            long long mid = (l + r) / 2;
            if(d1 == d2){
                long long cnt = mid - (mid / d1); // remaining integers that can be taken, it can be filled in both arrays
                if(cnt >= cnt1 + cnt2){
                    ans = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                // c1 = integers which are divisible by d1 only, not d2
                // c2 = integers which are divisible by d2 only, not d1
                long long common = mid / lcm;
                long long c1 = (mid / d1) - common, c2 = (mid / d2) - common;
                
                long long z1 = cnt1, z2 = cnt2;
                long long avail = mid - (c1 + c2 + common); // integers that can be filled in either of the arrays
                
                z1 -= min(z1, c2); // array1 can take c2 integers
                z2 -= min(z2, c1); // array 2 can take c1 integers
                
                if(z1 + z2 <= avail){
                    ans = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
        }
        
        return ans;
    }
};