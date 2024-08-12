#include<iostream>
#include<vector>
using namespace std;


 vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);
        int left = 0;
        int right = n;
        int k = 0;
        while (k < 2 * n) {
            ans[k++] = nums[left++];
            ans[k++] = nums[right++];
        }

        return ans;
}








int main(){
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> result = shuffle(nums, n);

    cout << "Shuffled array: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}