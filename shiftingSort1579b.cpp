#include<bits/stdc++.h>



int main(){
    vector<int> nums;
    sort(nums.begin(),nums.end());
        int maxp;
        int x = nums.size();
        if(x == 3){maxp = nums[x-1]*nums[x-2]*nums[x-3];return maxp;}
        if( (nums[x-1]>0 &&nums[x-2]>0 && nums[x-3]) ){
            maxp = nums[x-1]*nums[x-2]*nums[x-3];
            return maxp;
        }
        int negative = 0;
        for(int i = 1 ; i<4 ;i++){
            if(nums[x-i]<0){
                negative++;
            }
        }
        if(negative == 1){
            maxp = nums[0]*nums[x-3]*nums[x-1];
            return maxp;
        }
        else if(negative == 2){
            maxp = nums[x-1]*nums[0]*nums[1];
            return maxp;
        }
        else if(negative == 3){
            maxp = nums[0]*nums[1]*nums[2];
        }
        return maxp;
}
