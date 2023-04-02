class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        
        int n_Minus1 = 1, n_Minus2 = 0;
        int ans = 0;
        
        // as for n = 2, ans should be fib(2 - 1) + fib(2 - 2);
        // so for n = 2, ans should be fib(1) + fib(0);
        // also fib(1) is 1 and fib(0) = 0
        // and fib(1) n_Minus1 for n = 2
        // and also fib(0) is n_Minus2 for n = 2
        // that's why we intially give n_Minus1 = 1 and n_Minus2 = 0;
		// intially it will be for n = 1 and n = 0
        
        for(int i = 2; i <= n; i++)
        {
            int curr = (n_Minus1 + n_Minus2);
            
            // now n_minus2 become n_Minus1
            // and n_minus1 becomes curr
            // so do that and update our ans to curr
            
            n_Minus2 = n_Minus1;
            n_Minus1 = curr;
            ans = curr;
        }
        
        return ans;
    }
};
