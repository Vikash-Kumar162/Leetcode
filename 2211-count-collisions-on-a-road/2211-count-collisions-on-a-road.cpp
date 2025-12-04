class Solution {
public:
    int countCollisions(string directions) {
        // int n = directions.size();
        // if(n == 1) return 0;

        // int collisions = 0;
        // int i = 0;
        // while(i < n-1){
        //     while(directions[i] == 'L'){
        //         i++;
        //     }
        //     while(directions[i] == 'R'){
        //         i++;
        //     }
        //     if(directions[i] == 'R' && directions[i+1] == 'L'){
        //         collisions += 2;
        //         directions[i+1] = 'S';
        //     }
        //     else if(directions[i] == 'R' && directions[i+1] == 'S'){
        //         collisions ++;
        //         directions[i+1] = 'S';

        //     }
        //     else if(directions[i] == 'S' && directions[i+1] == 'L'){
        //         collisions ++;
        //         directions[i+1] = 'S';
        //     }
        //    i++;
        // }
        // return collisions;


         int n = directions.size();
         int left = 0, right = n - 1;

    // Skip all leading 'L' (they never collide with anything)
    while (left < n && directions[left] == 'L') {
        left++;
    }

    // Skip all trailing 'R' (they never collide with anything)
    while (right >= 0 && directions[right] == 'R') {
        right--;
    }

    int collisions = 0;
    // In the segment [left, right], every 'L' or 'R' will collide once
    for (int i = left; i <= right; i++) {
        if (directions[i] != 'S') {
            collisions++;
        }
    }

    return collisions;
    }
};