
class Solution {
public:
     void fc(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
     {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
            //pick condition
            if(arr[ind]<=target)
            {
                ds.push_back(arr[ind]);
                fc(ind,target-arr[ind],arr,ans,ds);
                ds.pop_back();
            }
            //not pick
            fc(ind+1,target,arr,ans,ds);
        

     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        fc(0,target, candidates,ans,ds);
        return ans;

        
    }
};
