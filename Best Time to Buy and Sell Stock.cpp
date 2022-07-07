class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n= p.size() , mpro = 0 , dif = INT_MAX ;
        for(int i=0 ; i < n ;i++)
        {
            dif = min(dif , p[i]) ;
            mpro = max(mpro , p[i] - dif) ;
        }
        return mpro ;
    }
};