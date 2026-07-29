class Solution {
    int dir[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int isles=0;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]=='1'){
                    isles++;
                    dfs(grid,r,c);
                }
            }
        }
        return isles;
    }
    void dfs(vector<vector<char>>&grid,int r,int c){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]=='0')return;
        grid[r][c]='0';
        for (auto d:dir ){
            dfs(grid,r+d[0],c+d[1]);
        }
    }
};
