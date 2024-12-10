class Solution {
private:
    vector<vector<int>> directions; // {N, E, S, W}
    unordered_set<string> obstacleSet; // To store obstacles
    int x, y;       // Robot's current position
    int direction;  // Current direction index

    // Helper function to convert coordinates to a unique string key
    string getKey(int x, int y) {
        return to_string(x) + "," + to_string(y);
    }

public:
    // Constructor to initialize robot and load obstacles
    Solution() {
        directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        x = 0;
        y = 0;
        direction = 0; // Start facing North
    }

    // Simulates the robot's movements
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // Insert obstacles into the set
        for (const auto& obs : obstacles) {
            obstacleSet.insert(getKey(obs[0], obs[1]));
        }

        int maxDistanceSquared = 0;

        for (int cmd : commands) {
            if (cmd == -2) {
                // Turn left 90 degrees
                direction = (direction + 3) % 4;
            } else if (cmd == -1) {
                // Turn right 90 degrees
                direction = (direction + 1) % 4;
            } else {
                // Move forward
                for (int step = 0; step < cmd; ++step) {
                    int newX = x + directions[direction][0];
                    int newY = y + directions[direction][1];

                    // Check if the new position is an obstacle
                    if (obstacleSet.find(getKey(newX, newY)) == obstacleSet.end()) {
                        x = newX;
                        y = newY;
                        maxDistanceSquared = max(maxDistanceSquared, x * x + y * y);
                    } else {
                        break; // Stop moving forward if there's an obstacle
                    }
                }
            }
        }

        return maxDistanceSquared;
    }
};