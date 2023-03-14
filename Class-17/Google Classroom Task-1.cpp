class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        double l = 0, r = x;
        double eps = 1e-12;
        
        for(int i = 0; i < 70; i++) {
            double mid = ( l + r ) / 2;
            if ( mid*mid <= x ) l = mid;
            else r = mid;
        }
        
        return floor(l);
    }
};