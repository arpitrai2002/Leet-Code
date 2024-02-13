class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        int len=part.length();
        while(pos !=string::npos){
            s.erase(pos,len);
            pos=s.find(part);
        }
        return s;
    }
};