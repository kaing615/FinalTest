#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> rotten;
        int fresh_count = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2) {
                    rotten.push({ i, j });
                }
                else if (grid[i][j] == 1) {
                    fresh_count++;
                }
            }
        }

        if (fresh_count == 0) return 0;

        vector<pair<int, int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

        int minutes = 0;

        while (!rotten.empty()) {
            int size = rotten.size();
            bool rotted = false;
            for (int i = 0; i < size; ++i) {
                pair<int, int> p = rotten.front();
                int x = p.first;
                int y = p.second;
                rotten.pop();

                for (const pair<int, int>& direction : directions) {
                    int dx = direction.first;
                    int dy = direction.second;
                    int new_x = x + dx;
                    int new_y = y + dy;


                    if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && grid[new_x][new_y] == 1) {
                        grid[new_x][new_y] = 2;
                        rotten.push({ new_x, new_y });
                        fresh_count--;
                        rotted = true;
                    }
                }
            }

            if (rotted) minutes++;
        }

        return fresh_count == 0 ? minutes : -1;
    }
};

int main() {
    Solution solution;

    vector<vector<int>> grid1 = { {2,1,1},{1,1,0},{0,1,1} };
    vector<vector<int>> grid2 = { {2,1,1},{0,1,1},{1,0,1} };
    vector<vector<int>> grid3 = { {0,2} };

    cout << solution.orangesRotting(grid1) << endl;
    cout << solution.orangesRotting(grid2) << endl;
    cout << solution.orangesRotting(grid3) << endl;

    return 1;
}