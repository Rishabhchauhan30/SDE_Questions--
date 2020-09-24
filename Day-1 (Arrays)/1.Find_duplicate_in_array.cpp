//1-USING SORTING IN 
//T.C--O(nlogn)
/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == nums[i+1])
                return nums[i];
        }
        return -1;
        
    }
};

//2-USING HASHMAP IN
//T.C--O(n) AND  
//S.C--O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]] >=2)
                return nums[i];
        }
        return -1;
        
    }
};

//3-USING  Floyd's Tortise and the Hare Approach 
//T.C[O[n]] 
//S.C[O[1]]
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Solution using Floyd's Tortise and the Hare 
        int tort = nums[0];
        int hare = nums[nums[0]];
        while (tort != hare) {
            tort = nums[tort];
            hare = nums[nums[hare]];
        }
        
        tort = 0;
        while(tort != hare) {
            tort = nums[tort];
            hare = nums[hare];
        }
        
        return hare;
    }
};

*/