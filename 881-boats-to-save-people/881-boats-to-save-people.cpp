class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int ans=0, i=0, j=people.size()-1;
       sort(people.begin(), people.end());
        while(i<=j){
            ans++;
            if (people[i] + people[j] <= limit)
                i++;
            j--;
        }
        return ans;
    }
};