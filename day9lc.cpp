#include<bits/stdc++.h>
#include<vector>
 using namespace std;

   vector<vector<int>> findMatrix(vector<int>& nums) {
         
        vector<int> freq(nums.size() + 1);
        
        vector<vector<int>> ans;
        for(int c: nums){
            if(freq[c] >= ans.size()){
                ans.push_back({});
            }
            
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        return ans;
    }

int main(){
    int t; cin>>t;
    while(t--){
     int n;
     cin>>n;

     vector<int> nums(n);
     for(int i=0; i<n; i++){
        cin>> nums[i];
     }

     cout << findMatrix(nums) << endl;

    }
    
return 0;
}
