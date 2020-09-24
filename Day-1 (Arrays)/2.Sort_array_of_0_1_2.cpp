//There are three approaches 


//1--by using sorting method which will do this is in 
//T.C[O(nLogn)]
//S.c[O(1)]
class Solution {
public:
   void sortColors(vector<int>& a) {
       sort(a.begin(),a.end());
   }
};

//2--Using counting method which will take
//T.C[O[2n]]
//S.C[O[1]]
class Solution {
public:
    void sortColors(vector<int>& nums ) 
    {
        int mid=0,l=0,r=nums.size()-1,e=0 ;
    for(int i=0;i<=r;i++)
    {
	if(nums[i]==0)
		l++;
	else if(nums[i]==2)
		e++;
	else if(nums[i]==1)
		mid++;
    }
        nums.clear();
     for(int i=0;i<l;i++)
    {   
        nums.push_back(0);
    }
         for(int i=0;i<mid;i++)
    {   
         nums.push_back(1);
    }
         for(int i=0;i<e;i++)
    {   
        nums.push_back(2);
    }
    }     
}

//3--Using Dutch National Flag Algorithm
//T.C[O(n)]
//S.C[O(1)]
//The idea is to take three pointers namely low mid and high 
//all the 0's before low --- all the 1's are between low and mid -- and all the 2's are to the right of high
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
                swap(nums[low++],nums[mid++]);
            else if(nums[mid]==1)
                nums[mid++];
            else if(nums[mid]==2)
                swap(nums[mid],nums[high--]);
        }
    }
};