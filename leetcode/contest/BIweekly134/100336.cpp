#include <vector>
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int prev = colors[i];
            int cur = colors[(i + 1) % n];
            int next = colors[(i + 2) % n];
        
        if (prev != cur && cur!= next ) {
            ++count;
        }
    }
    //dinkar
    return count;
}
    
};