class Solution {
public:
    const int moveX[4] {-1,1,0,0};
    const int moveY[4] {0,0,-1,1};

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int maxX = image.size();
        int maxY = image[0].size();

        bool visited[51][51] = {false};
        std::queue<pair<int,int>> q;
        int startColor = image[sr][sc];

        q.push(make_pair(sr,sc));
        visited[sr][sc] = true;

        while(q.size() > 0)
        {
            auto srsc = q.front();
            q.pop();

            int x = srsc.first;
            int y = srsc.second;
            image[x][y] = color;

            for(int i = 0; i < 4; i++)
            {
                int mx = x + moveX[i];
                int my = y + moveY[i];

                if (mx < 0 || mx >= maxX || 
                my < 0 || my >= maxY || 
                visited[mx][my] == true || 
                image[mx][my] != startColor) continue;

                visited[mx][my] = true;
                q.push(make_pair(mx,my));
            }
        }

        return image;
    }
};