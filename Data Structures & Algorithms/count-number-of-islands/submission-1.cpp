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
        queue<pair<int,int>> q;
        grid[r][c]='0';
        q.push({r,c});
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            int row=node.first,col=node.second;
            for (auto d:dir ){
                int nr=row+d[0];
                int nc=col+d[1];
        if(nr>=0&&nc>=0&&nr<grid.size()&&nc<grid[0].size()&&grid[nr][nc]=='1'){
            q.push({nr,nc});
            grid[nr][nc]='0';
        }

            }
        }
    }
};
