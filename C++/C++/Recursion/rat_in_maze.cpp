#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

    bool isSafe(const vector<vector<int>>& maze, int &n, vector<vector<int>> &visited, int new_x, int new_y) {
        if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && maze[new_x][new_y] == 1 && visited[new_x][new_y] == 0) {
            return true;
        }
        
        else {
            return false;
        }
    }

    void solve(const vector<vector<int>>& maze, int &n, int source_x, int source_y, vector<vector<int>> &visited, string &path, vector<string> &ans) 
    {
        // base case 
        if(source_x == n-1 && source_y == n-1) {
            ans.push_back(path);
            return;
        }
        
        visited[source_x][source_y] = 1;
        
        // down
        int new_x = source_x+1;
        int new_y = source_y;
        
        if(isSafe(maze, n, visited, new_x, new_y)) {
            path.push_back('D');
            solve(maze, n, new_x, new_y, visited, path, ans);
            path.pop_back();
        }
        
        // left
        new_x = source_x;
        new_y = source_y-1;
        
        if(isSafe(maze, n, visited, new_x, new_y)) {
            path.push_back('L');
            solve(maze, n, new_x, new_y, visited, path, ans);
            path.pop_back();
        }
        
        // right 
        new_x = source_x;
        new_y = source_y+1;
        
        if(isSafe(maze, n, visited, new_x, new_y)) {
            path.push_back('R');
            solve(maze, n, new_x, new_y, visited, path, ans);
            path.pop_back();
        }
        
        // top 
        new_x = source_x-1;
        new_y = source_y;
        
        if(isSafe(maze, n, visited, new_x, new_y)) {
            path.push_back('U');
            solve(maze, n, new_x, new_y, visited, path, ans);
            path.pop_back();
        }
                   
        visited[source_x][source_y] = 0;
     }
  
   
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
        vector<string> ans;
        string path = "";
        
        if(arr[0][0] == 0) {
            return ans;
        }
        
        vector<vector<int>> visited(n, vector<int>(n, 0));
        
        int source_x = 0, source_y = 0;
        
        solve(arr, n, source_x, source_y, visited, path, ans);
        sort(ans.begin(),ans.end());
        return ans;
}