class Solution {
public:
    string predictPartyVictory(string s) {
        int n = s.size();
        queue<int> r;
        queue<int> d;

        for(int i=0; i<n; ++i)
            s[i] == 'R' ? r.push(i) : d.push(i);

        while(r.empty()==0 and d.empty()==0){
            if(r.front() < d.front())
                r.push(r.front() + n);
            else d.push(d.front() + n);
            
            r.pop();
            d.pop();
        }

        if(r.empty() == 0) return "Radiant";
        return "Dire";

    }
};