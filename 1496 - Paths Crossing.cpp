// https://leetcode.com/problems/path-crossing/

class Solution {
public:
    bool isPathCrossing(string path) {
        int i,x=0,y=0;
        set<pair<int,int>> s;
        s.insert({0,0});
        for(i=0;i<path.size();i++){
            switch(path[i]){
                case 'N' : y++; s.insert({x,y}); break;
                case 'S' : y--; s.insert({x,y}); break;
                case 'E' : x++; s.insert({x,y}); break;
                case 'W' : x--; s.insert({x,y}); break;
            }
            if(s.size()<=i+1) return 1;
        }
        return 0;
    }
};
