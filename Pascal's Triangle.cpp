class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     
        vector<vector<int>> v ;
        
        for(int i=0 ; i < numRows ; i++)
        {
            vector<int> r ;
            for(int j=0 ; j <= i ; j++)
            {
                if(j == i || j == 0)   r.push_back(1) ;
                else    
                {
                    int x = v[i-1][j-1] + v[i-1][j] ;
                    r.push_back(x) ;
                }
            }
            v.push_back(r) ;
        }
        return v ;
    }
};