class Solution {
public:
    void dfs(vector<vector<int>> &isConnected,vector<bool> &visited,int i){        
        visited[i]=true;
        for(int j=0;j<isConnected.size();j++){
            if(!visited[j] && isConnected[i][j]==1){
                dfs(isConnected,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(),false);
        int no_of_provinces = 0;
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                no_of_provinces++;
                dfs(isConnected,visited,i);
            }
        }
        return no_of_provinces;
    }
};