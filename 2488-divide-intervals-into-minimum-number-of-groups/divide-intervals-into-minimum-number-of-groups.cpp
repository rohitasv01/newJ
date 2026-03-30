class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> starting,ending;
        for(int i=0;i<n;i++)
        {
            starting.push_back(intervals[i][0]);
            ending.push_back(intervals[i][1]);
        }
        sort(starting.begin(),starting.end());
        sort(ending.begin(),ending.end());
        int p1=0,p2=0;
        int count=0,maxi=0;
        while(p1<n && p2<n)
        {
            if(starting[p1]<=ending[p2])
            {
                p1++;
                count++;
            }
            else
            {
                p2++;
                count--;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};