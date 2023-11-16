#include <bits/stdc++.h>
using namespace std;



    bool isSafe(int x, int y,int n, vector<vector<int>>visited,vector<vector<int>>m){
        
        if((x>=0 && x<n) && (y>=0&&y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    void solve(vector<vector<int>> &m, int n, vector<string>&ans, int srcx, int srcy, 
    vector<vector<int>>visited, string path)
    {
        //base case
        if(srcx==n-1 && srcy==n-1){
            
            ans.push_back(path);
            return ;
        }
        
        visited[srcx][srcy]=1;
        
        //now make cases for all 4 directions (up,down,left,right)
        
        //down
        int tempx=srcx+1;
        int tempy=srcy;
        if(isSafe(tempx,tempy,n,visited, m)){
            path.push_back('D');    
            solve(m,n,ans,tempx,tempy,visited,path);
            path.pop_back();
        }
        
        //left
         tempx=srcx;
         tempy=srcy-1;
        if(isSafe(tempx,tempy,n,visited, m)){
            path.push_back('L');    
            solve(m,n,ans,tempx,tempy,visited,path);
            path.pop_back();
        }
        
        //right
         tempx=srcx;
         tempy=srcy+1;
        if(isSafe(tempx,tempy,n,visited, m)){
            path.push_back('R');    
            solve(m,n,ans,tempx,tempy,visited,path);
            path.pop_back();
        }
        
        //UP
         tempx=srcx-1;
         tempy=srcy;
        if(isSafe(tempx,tempy,n,visited, m)){
            path.push_back('U');    
            solve(m,n,ans,tempx,tempy,visited,path);
            path.pop_back();
        }
        
        visited[srcx][srcy]=0;
        
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        
        if(m[0][0]==0){
            return ans; 
        }
        
        int srcx=0,srcy=0;
        
        vector<vector<int>>visited=m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }   
        
        string path="";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
    }


    


int main()
{
    vector<vector<int>>m=
        {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}
         };
    
    int n=m.size();
    cout<<"the possible directions are : "<<endl;
    vector<string>ans;
    ans=findPath(m,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" , ";
    }


return 0;
}

