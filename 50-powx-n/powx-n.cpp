class Solution {
    private:
    double tailpow(double base , long long exp , double acc){
        if(exp==0){
            return acc;
        }
        if(exp%2==1){
            return tailpow( base*base , exp/2 , base*acc);
            
        }
        return tailpow(base*base , exp/2 , acc);
    }
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        long long N = n ;
        if(N<0){
            x=1/x;
            N=-N;
        }
       return tailpow(x , N , 1.0 ) ;
    }
    
};