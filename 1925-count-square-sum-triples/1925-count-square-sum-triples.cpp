class Solution {
public:
    int countTriples(int n) {
        // Brute Force
        // int count = 0;
        // for(int a=1; a<=n; a++){
        //     for(int b=1; b<=n; b++){
        //         for(int c=1; c<=n; c++){
        //             if(a*a + b*b == c*c)
        //             count ++;
        //         }
        //     }
        // }
        // return count;

        // BETTER APPROACH
        set<int> st;
        for(int i=1; i<=n; i++){
            st.insert(i*i);
        }

        int count = 0;
        for(int a=1; a<=n; a++){
            for(int b=1; b<=n; b++){
                int square = a*a + b*b;
                if(st.find(square) != st.end())
                count ++;
            }
        }
        return count;
    }
};