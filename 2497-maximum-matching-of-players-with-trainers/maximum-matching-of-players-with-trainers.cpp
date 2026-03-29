class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int p1=0,p2=0,count=0;;
        while(p1<players.size() && p2<trainers.size())
        {
            if(players[p1]<=trainers[p2])
            {
                p1++;
                count++;
            }
            p2++;
        }
        return count;
    }
};