class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        
        int r = m.size() , c = m[0].size() ; 
        vector<pair<int,int>> p ;
        for(int i=0 ; i<r  ; i++)
        {
            for(int j=0 ; j < c ; j++)
            {
                if(m[i][j] == 0) p.push_back({i,j}) ;
            }
        }
        
        for(auto i : p)
        {
            for(int k=0 ; k<c ;k++)    m[i.first][k] = 0;
            
            for(int k=0 ; k<r ;k++)    m[k][i.second] = 0;
        }
    }
};