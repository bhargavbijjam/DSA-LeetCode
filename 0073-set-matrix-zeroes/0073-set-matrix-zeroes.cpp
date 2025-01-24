class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>> q;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0) q.push(make_pair(i,j));
            }
        }
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            for(int j=0;j<matrix[0].size();j++){
                matrix[curr.first][j] = 0;
            }
            for(int i=0;i<matrix.size();i++){
                matrix[i][curr.second] = 0;
            }
        }
    }
};